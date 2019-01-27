/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:38:57 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 13:38:59 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"
#include "Window.hpp"
#include "winSDL.hpp"

int	main(int argc, char **argv) {
	if (argc == 1)
	{
		Window	win;
		win.InitScreen();
		while (42)
		{
			win.createWin();
			win.putInfo();
			win.keyEvents();
		}
	}
	if (argc == 2 && strcmp(argv[1], "-sdl") == 0)
	{
		WinSDL win;

		win.SDLInit();
		while (42)
		{
			win.putSDLInfo();
			win.SDLEvents();
		}
	}
	else
		return 0;
	return 0;
}
