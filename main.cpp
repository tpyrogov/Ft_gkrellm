/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpyrogov <tpyrogov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:38:57 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 21:18:43 by tpyrogov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"
#include "Window.hpp"
// #include "winSDL.hpp"

// int	main(int argc, char **argv) {
int main() {
	// if (argc == 1)
	// {
		Window	win;
		win.InitScreen();
		while (42)
		{
			win.createWin();
			win.putInfo();
			win.keyEvents();
		}
<<<<<<< HEAD
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
=======
	// }
	// if (argc == 2 && strcmp(argv[1], "-sdl"))
	// {
	// 	WinSDL win;
	// 	win.SDLInit();
	// 	while (42)
	// 	{
	// 		win.DrawGameName();
	// 		// win.putSDLInfo();
	// 		// win.SDLEvents();
	// 	}
	// }
	// else
	// 	return 0;
>>>>>>> 0f87a0a76a15552cf09bf80736dbbd4417a163af
	return 0;
}
