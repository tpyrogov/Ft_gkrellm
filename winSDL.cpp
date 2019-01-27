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

WinSDL::WinSDL () {}

WinSDL::WinSDL(WinSDL const &rhs) 
{
	*this = rhs;
	return;
}

WinSDL::~WinSDL(void) {
	SDL_DestroyWindow(_win);
	SDL_Quit();
	TTF_Quit();
}

WinSDL & WinSDL::operator=(WinSDL const &)
{
	return (*this);
}

// void	WinSDL::putSDLInfo() {

// 	SDL_Rect rect = {230, 90, 20, 20};

// 	if (!(d->text_p1 = TTF_RenderText_Blended(_font2, d->p1,
// 	(SDL_Color){68, 148, 154, 0})))
// 	SDL_BlitSurface(d->text_p1, NULL, d->s, &rect);
// 	SDL_FreeSurface(d->text_p1);
// }

void	WinSDL::SDLInit() {
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		return ;//exception
	if (TTF_Init() == -1)
		return ;
	if (!(_font = TTF_OpenFont("font.ttf", 40)))
		return ;
	if (!(_font2 = TTF_OpenFont("font/font.ttf", 30)))
		return ;
	if (!(_win = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 100, 100, 0)))
		return ;
	if (!(_surface = SDL_GetWindowSurface(_win)))
		return ;
}

void	WinSDL::DrawGameName() {
	SDL_Rect rect = {10, 10, 50, 50};

	_title = TTF_RenderText_Blended(_font, "ft_gkrellm",
	(SDL_Color){255, 204, 204, 0});
	SDL_BlitSurface(_title, NULL, _surface, &rect);
	SDL_UpdateWindowSurface(_win);
}