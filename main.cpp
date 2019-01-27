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

int	main() {
	CpuModule os;
	Window	win;
	win.InitScreen();
	std::string s = os.getModel();
	while (42)
	{
		win.createWin();
		win.keyEvents();
	}
	std::cout << s << std::endl << os.getUserUsage() << std::endl << os.getSysUsage() ;
	return 0;
}
