/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpyrogov <tpyrogov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:53:22 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 22:32:59 by tpyrogov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"
#include <unistd.h>

Window::Window () {}

Window::Window(Window const &rhs) 
{
	*this = rhs;
	return;
}

// Window::Window(std::string const name) {}

Window::~Window(void) {}

Window & Window::operator=(Window const &)
{
	return (*this);
}

void	Window::InitScreen() {

	initscr();
	noecho();
	curs_set(false);
	cbreak();
	timeout(0);
	keypad(stdscr, true);
	start_color();
	init_color(COLOR_BLUE, 408, 408, 408);
	init_color(COLOR_CYAN, 1000, 500, 113);
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(6, COLOR_YELLOW, COLOR_BLACK);
	init_pair(7, COLOR_CYAN, COLOR_BLACK);
	this->_win = newwin(40, 160, 1, 1);
}

void	Window::keyEvents() {
	int key;

	keypad(this->_win, true);
	key = getch();
	if (key == 27)
	{
		delwin(this->_win);
		endwin();
		exit(0);
	}
	else if (key == KEY_RESIZE)
	{
		this->_win = newwin(40, 160, 1, 1);
		createWin();
	}
}

void	Window::createWin() {
	werase(this->_win);
	wattron(this->_win, COLOR_PAIR(4));
	wborder(this->_win, 124, 124, 124, 124,124, 124, 124, 124);
	mvwvline(this->_win, 0, 50, 124, 40);
	mvwvline(this->_win, 0, 107, 124, 40);
	mvwvline(this->_win, 0, 160, 124, 40);
	mvwhline(this->_win, 20, 0, 124, 160);
	wattron(this->_win, COLOR_PAIR(3));
	mvwprintw(this->_win, 1, 56, T1);
	mvwprintw(this->_win, 2, 56, T2);
	mvwprintw(this->_win, 3, 56, T3);
	mvwprintw(this->_win, 4, 56, T4);
	mvwprintw(this->_win, 5, 56, T5);
	mvwprintw(this->_win, 6, 56, T6);
	mvwprintw(this->_win, 7, 56, T7);
	mvwprintw(this->_win, 8, 56, T8);
	wattroff(this->_win, COLOR_PAIR(3));
	wattron(this->_win, COLOR_PAIR(7));
	mvwprintw(this->_win, 12, 67, L1);
	mvwprintw(this->_win, 13, 67, L2);
	mvwprintw(this->_win, 14, 67, L3);
	mvwprintw(this->_win, 15, 67, L4);
	mvwprintw(this->_win, 16, 67, L5);
	mvwprintw(this->_win, 17, 67, L6);
	wattroff(this->_win, COLOR_PAIR(7));
}

void Window::printCpu(int y, int i) {
	int x;
	int color;
	int j = 0;

	x = 121;
	wattron(this->_win, COLOR_PAIR(3));
	mvwprintw(_win, y, 120, "[");
	wattroff(this->_win, COLOR_PAIR(3));

	i = i * 24 / 100;
	while (j < i) {
		if (20 < j && j < 24)//red
			color = 3;
		else if (j > 14)//yellow
			color = 6;
		else//green
			color = 2;
		wattron(this->_win, COLOR_PAIR(color));
		mvwprintw(_win, y, x++, "|");
		wattroff(this->_win, COLOR_PAIR(color));
		j++;
	}
	// wattron(_win, COLOR_PAIR(2));
	// for (int i = 0; i < 4; i++) {
	// 	mvwprintw(_win, y, 120 + 1 + i, "|");
	// }
	// wattroff(_win, COLOR_PAIR(2));
	wattron(this->_win, COLOR_PAIR(3));
	mvwprintw(_win, y, 145, "]");
	wattroff(this->_win, COLOR_PAIR(3));
}

void	Window::putCpuModule() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 2, 127, "--CPU MODULE--");
	wattroff(this->_win, COLOR_PAIR(5));

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 4, 129, "CPU Model:");
	wattroff(this->_win, COLOR_PAIR(6));

	mvwprintw(this->_win, 6, 122, "%s", _cpuInfo.getModel());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 9, 129, "Avrg. Load:");
	wattroff(this->_win, COLOR_PAIR(6));

	mvwprintw(this->_win, 11, 127, "%s", _cpuInfo.getLoadAvg());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 14, 129, "Clock Rate:");
	wattroff(this->_win, COLOR_PAIR(6));

	mvwprintw(this->_win, 16, 131, "%s", _cpuInfo.getClockRate());

	// printCpu(24, 113, 10.0);
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 22, 127, "--CPU USAGE--");
	wattroff(this->_win, COLOR_PAIR(5));

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(_win, 25, 112, "User: ");
	wattroff(this->_win, COLOR_PAIR(6));

	printCpu(25, std::atoi( _cpuInfo.getUserUsage()));
	mvwprintw(_win, 25, 147, "%s%%", _cpuInfo.getUserUsage());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(_win, 30, 112, "System: ");
	wattroff(this->_win, COLOR_PAIR(6));

	printCpu(30, std::atoi(_cpuInfo.getSysUsage()));
	mvwprintw(_win, 30, 147, "%s%%", _cpuInfo.getSysUsage());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(_win, 35, 112, "Idle: ");
	wattroff(this->_win, COLOR_PAIR(6));

	printCpu(35, std::atoi(_cpuInfo.getIdleUsage()));
	mvwprintw(_win, 35, 147, "%s%%", _cpuInfo.getIdleUsage());
}

void	Window::putRamModule() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 2, 17, "--RAM MODULE--");
	wattroff(this->_win, COLOR_PAIR(5));

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 4, 18, "Used memory:");
	wattroff(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 6, 21, "%s", _ramInfo.getRamUsed());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 9, 17, "Unused memory:");
	wattroff(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 11, 21, "%s", _ramInfo.getRamIdle());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 14, 17, "Total memory:");
	wattroff(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 16, 21, "%s", _ramInfo.getToatal());
}

void	Window::putNetwork() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 22, 17, "--NETWORKS--");
	wattroff(this->_win, COLOR_PAIR(5));

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 25, 18, "Packets in:");
	wattroff(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 27, 17, "%s/%s", _network.getInPacketsNum(), _network.getInPacketsWeight());

	wattron(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 31, 18, "Packets out:");
	wattroff(this->_win, COLOR_PAIR(6));
	mvwprintw(this->_win, 33, 17, "%s/%s", _network.getOutPacketsNum(), _network.getOutPacketsWeight());
}

void	Window::putInfo() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 22, 72, "--HOSTNAME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 23, 74, "%s", _hostName.getHostName().c_str());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 25, 72, "--USERNAME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 26, 74, "%s", _hostName.getUserName().c_str());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 28, 74, "--DATE--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 29, 74, "%s", _date.getDate());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 31, 74, "--TIME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 32, 73, "%s", _date.getTime());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 34, 73, "--OSNAME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 35, 68, "%s", _osInfo.getOSInfo());
	putCpuModule();
	putRamModule();
	putNetwork();
	// printCpu();
	wrefresh(this->_win);
}

