/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:53:36 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 16:53:38 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

#include <iostream>
#include "OsInfoModule.hpp"
#include "HostnameModule.hpp"
#include "CpuModule.hpp"
#include "DataModule.hpp"
#include "RamModule.hpp"
#include "NetworkModule.hpp"
#include <ncurses.h>

# define L1 "        /\\_/\\  /\\"
# define L2 "       / o o \\ \\ \\  "
# define L3 "      /   Y   \\/ /"
# define L4 "     /         \\/"
# define L5 "     \\ | | | | /"
# define L6 "      `|_|-|_|'"


# define T1 "   __ _            _             _ _           "
# define T2 "  / _| |          | |           | | |          "
# define T3 " | |_| |_     __ _| | ___ __ ___| | |_ __ ___  "
# define T4 " |  _| __|   / _` | |/ / '__/ _ \\ | | '_ ` _ \\ "
# define T5 " | | | |_   | (_| |   <| | |  __/ | | | | | | |"
# define T6 " |_|  \\__|   \\__, |_|\\_\\_|  \\___|_|_|_| |_| |_|"
# define T7 "       ______ __/ |                            "
# define T8 "      |______|___/                             "

class Window
{
public:
	Window();
	Window(Window const &rhs);
	~Window();
	Window &	operator=(Window const & rhs);

	void	InitScreen();
	void	createWin();
	void	keyEvents();
	void	HostnameMod();
	void	OsInfoMod();
	void	TimeMod();
	void	CpuMod();
	void	RamMod();
	void	NetMod();
	void	putInfo();
	void	putNetwork();
	void	putCpuModule();
	void	putRamModule();
	void	printCpu(int y, int i);

private:
	WINDOW *_win;
	OsInfoModule _osInfo;
	CpuModule	 _cpuInfo;
	HostnameModule _hostName;
	DataModule	_date;
	RamModule	_ramInfo;
	NetworkModule _network;
};

#endif
