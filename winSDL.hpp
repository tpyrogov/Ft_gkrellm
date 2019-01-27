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

# include <iostream>
# include <SDL2/SDL.h>
# include <SDL2/SDL_ttf.h>
# include "HostnameModule.hpp"
# include "DataModule.hpp"
#include "OsInfoModule.hpp"
#include "CpuModule.hpp"
#include "RamModule.hpp"

class WinSDL
{
public:
	WinSDL();
	WinSDL(WinSDL const &rhs);
	~WinSDL();
	WinSDL &	operator=(WinSDL const & rhs);

	void	SDLInit();
	void	SDLEvents();
	void	putSDLInfo();

private:
	SDL_Window *_win;
	SDL_Surface *_surface;
	TTF_Font	*_font;
	SDL_Surface *_title;
	SDL_Surface	*_CpuInfo;
	SDL_Surface	*_RamInfo;
	SDL_Surface	*_HostInfo;
	SDL_Surface	*_Date;
	SDL_Surface	*_OsInfo;

	OsInfoModule _osInfo;
	CpuModule	 _cpuInfo;
	HostnameModule _hostName;
	DataModule		_date;
	RamModule	_ramInfo;
};

#endif

