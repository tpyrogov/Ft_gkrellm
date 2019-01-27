/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winSDL.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 10:34:53 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 10:34:54 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WINSDL_HPP
# define WINSDL_HPP
# include <SDL2/SDL.h>
# include <SDL2/SDL_ttf.h>

class WinSDL
{
public:
	WinSDL();
	WinSDL(WinSDL const &rhs);
	~WinSDL();
	WinSDL &	operator=(WinSDL const & rhs);

	void	SDLInit();
	void DrawGameName();

private:
	SDL_Window *_win;
	SDL_Surface *_surface;
	TTF_Font	*_font;
	TTF_Font	*_font2;
	SDL_Surface *_title;
	SDL_Surface	*_CpuInfo;
	SDL_Surface	*_RamInfo;
	SDL_Surface	*_HostInfo;
	SDL_Surface	*_Date;
	
	// OsInfoModule _osInfo;
	// CpuModule	 _cpuInfo;
	// HostnameModule _hostName;
	// DataModule	_date;
	// RamModule	_ramInfo;
};

#endif

