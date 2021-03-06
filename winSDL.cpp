/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winSDL.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 10:34:47 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 10:34:48 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "winSDL.hpp"

WinSDL::WinSDL () {
	this->_win = NULL;
	this->_surface = NULL;
	this->_font = NULL;
	this->_title = NULL;
}

WinSDL::WinSDL(WinSDL const &rhs) 
{
	*this = rhs;
	return;
}

WinSDL::~WinSDL(void) {
	SDL_FreeSurface(_surface);
	SDL_DestroyWindow(_win);
	SDL_Quit();
	TTF_Quit();
}

WinSDL & WinSDL::operator=(WinSDL const &)
{
	return (*this);
}

void	WinSDL::putSDLInfo() {

	SDL_Rect rectname = {23, 60, 20, 20};// x, y, w, h
	SDL_Rect rect1 = {210, 10, 250, 250};
	SDL_Rect recthost = {415, 60, 20, 20};


	SDL_Rect rectDate = {400, 120, 20, 20};
	SDL_Rect rectOs = {110, 500, 20, 20};
	SDL_Rect rectTime = {23, 120, 20, 20};

	SDL_Rect rectRam0 = {350, 190, 20, 20};
	SDL_Rect rectRam1 = {395, 250, 20, 20};
	SDL_Rect rectRam2 = {395, 300, 20, 20};
	SDL_Rect rectRam3 = {395, 350, 20, 20};


	SDL_Rect rectCpu0 = {23, 190, 20, 20};
	SDL_Rect rectCpu1 = {45, 250, 20, 20};
	SDL_Rect rectCpu2 = {45, 300, 20, 20};
	SDL_Rect rectCpu3 = {45, 350, 20, 20};


	SDL_Color c = {68, 148, 154, 0};
	SDL_Color y = {248, 244, 188, 0};


	SDL_FillRect(_surface, NULL, 0x000000);
	SDL_BlitSurface(_title, NULL, _surface, &rect1);
	if (!(_HostInfo = TTF_RenderText_Blended(_font, _hostName.getUserName().c_str(), y)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_HostInfo, NULL, _surface, &rectname);

	if (!(_HostInfo = TTF_RenderText_Blended(_font, _hostName.getHostName().c_str(), y)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_HostInfo, NULL, _surface, &recthost);

	if (!(_Date = TTF_RenderText_Blended(_font, _date.getDate(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_Date, NULL, _surface, &rectDate);

	if (!(_Date = TTF_RenderText_Blended(_font, _date.getTime(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_Date, NULL, _surface, &rectTime);

	if (!(_OsInfo = TTF_RenderText_Blended(_font, _osInfo.getOSInfo(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_OsInfo, NULL, _surface, &rectOs);

	if (!(_CpuInfo = TTF_RenderText_Blended(_font, "CPU MODULE", y)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_CpuInfo, NULL, _surface, &rectCpu0);

	if (!(_CpuInfo = TTF_RenderText_Blended(_font, _cpuInfo.getUserUsage(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_CpuInfo, NULL, _surface, &rectCpu1);

	if (!(_CpuInfo = TTF_RenderText_Blended(_font, _cpuInfo.getSysUsage(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_CpuInfo, NULL, _surface, &rectCpu2);

	if (!(_CpuInfo = TTF_RenderText_Blended(_font, _cpuInfo.getIdleUsage(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_CpuInfo, NULL, _surface, &rectCpu3);

	if (!(_RamInfo = TTF_RenderText_Blended(_font, _ramInfo.getRamUsed(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_RamInfo, NULL, _surface, &rectRam3);

	if (!(_RamInfo = TTF_RenderText_Blended(_font, _ramInfo.getRamIdle(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_RamInfo, NULL, _surface, &rectRam2);

	if (!(_RamInfo = TTF_RenderText_Blended(_font, _ramInfo.getToatal(), c)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_RamInfo, NULL, _surface, &rectRam1);

	if (!(_RamInfo = TTF_RenderText_Blended(_font, "RAM MODULE", y)))
		throw std::logic_error(TTF_GetError());
	SDL_BlitSurface(_RamInfo, NULL, _surface, &rectRam0);


	SDL_UpdateWindowSurface(_win);
}

void	WinSDL::SDLEvents()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_QUIT || (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE))
			exit(0);
	}
	return ;
}

void	WinSDL::SDLInit() {

	SDL_Color c = {255, 204, 204, 0};

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		throw std::logic_error(SDL_GetError());
	if (TTF_Init() == -1)
		throw std::logic_error(TTF_GetError());
	if (!(_win = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 600, 600, 0)))
		throw std::logic_error(SDL_GetError());
	if (!(this->_font = TTF_OpenFont("./font.ttf", 30)))
		throw std::logic_error(TTF_GetError());
	if (!(_surface = SDL_GetWindowSurface(_win)))
		throw std::logic_error(SDL_GetError());
	if (!(_title = TTF_RenderText_Blended(_font, "FT_GKRELLM", c)))
		throw std::logic_error(TTF_GetError());
}

