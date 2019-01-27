/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:53:22 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 16:53:23 by lpohribn         ###   ########.fr       */
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
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
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

void	Window::printExtraInfo()	{
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
	mvwprintw(this->_win, 12, 67, L1);
	mvwprintw(this->_win, 13, 67, L2);
	mvwprintw(this->_win, 14, 67, L3);
	mvwprintw(this->_win, 15, 67, L4);
	mvwprintw(this->_win, 16, 67, L5);
	mvwprintw(this->_win, 17, 67, L6);
	// wattroff(this->_win, COLOR_PAIR(1));
}

void	Window::createWin() {
	wattron(this->_win, COLOR_PAIR(4));
	wborder(this->_win, 124, 124, 124, 124,124, 124, 124, 124);
	mvwvline(this->_win, 0, 50, 124, 40);
	mvwvline(this->_win, 0, 107, 124, 40);
	mvwvline(this->_win, 0, 160, 124, 40);
	mvwhline(this->_win, 20, 0, 124, 160);
	printExtraInfo();
	// wrefresh(this->_win);
}

// void Window::printCpu(int y, int x, float usage) {
// 	mvwprintw(_win, y, x, "[");
// 	int numOfBars = usage * 0.45;
// 	wattron(_win, COLOR_PAIR(2));
// 	for (int i = 0; i < numOfBars; i++) {
// 		mvwprintw(_win, y, x + 1 + i, "|");
// 	}
// 	wattroff(_win, COLOR_PAIR(2));
// 	mvwprintw(_win, y, x + 36, "]");
// }

void	Window::putCpuModule() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 2, 127, "--CPU MODULE--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 6, 122, "User Usage:   %s ", _cpuInfo.getUserUsage());
	mvwprintw(this->_win, 8, 122, "System Usage: %s", _cpuInfo.getSysUsage());
	mvwprintw(this->_win, 10, 122, "Idle Usage:   %s", _cpuInfo.getIdleUsage());
	// printCpu(24, 113, 10.0);
	wattron(this->_win, COLOR_PAIR(5));
}

void	Window::putRamModule() {
	mvwprintw(this->_win, 2, 17, "--RAM MODULE--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 8, 14, "Used memory:   %s", _ramInfo.getRamUsed());
	mvwprintw(this->_win, 10, 14, "Free memory:   %s", _ramInfo.getRamIdle());
}

void	Window::putNetwork() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 22, 17, "--NETWORKS--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 27, 17, "Packets in:");
	mvwprintw(this->_win, 28, 17, "%s/%s", _network.getInPacketsNum(), _network.getInPacketsWeight());
	mvwprintw(this->_win, 30, 17, "Packets out:");
	mvwprintw(this->_win, 31, 17, "%s/%s", _network.getOutPacketsNum(), _network.getOutPacketsWeight());
}

void	Window::putInfo() {
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 22, 72, "--HOSTNAME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 23, 74, "%s", _hostName.getHostName().c_str());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 27, 72, "--USERNAME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 28, 74, "%s", _hostName.getUserName().c_str());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 31, 74, "--DATE--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 32, 74, "%s", _date.getDate());
	wattron(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 35, 74, "--TIME--");
	wattroff(this->_win, COLOR_PAIR(5));
	mvwprintw(this->_win, 36, 75, "%s", _date.getTime());
	putCpuModule();
	putRamModule();
	putNetwork();
	wrefresh(this->_win);
}

