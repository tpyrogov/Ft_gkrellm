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
	// init_color(COLOR_BLUE, 408, 408, 408);
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
}

void	Window::keyEvents() {
	int key;

	keypad(this->_win, true);
	key = wgetch(this->_win);
	if (key == 27)
	{
		delwin(this->_win);
		endwin();
		exit(0);
	}
	else if (key == KEY_RESIZE)
	{
		createWin();
	}
}

void	Window::printExtraInfo()	{
	wattron(this->_win, COLOR_PAIR(3));
	mvwprintw(this->_win, 1, 165, T1);
	mvwprintw(this->_win, 2, 165, T2);
	mvwprintw(this->_win, 3, 165, T3);
	mvwprintw(this->_win, 4, 165, T4);
	mvwprintw(this->_win, 5, 165, T5);
	mvwprintw(this->_win, 6, 165, T6);
	mvwprintw(this->_win, 7, 165, T7);
	mvwprintw(this->_win, 8, 165, T8);
	wattroff(this->_win, COLOR_PAIR(3));
	mvwprintw(this->_win, 32, 180, L1);
	mvwprintw(this->_win, 33, 180, L2);
	mvwprintw(this->_win, 34, 180, L3);
	mvwprintw(this->_win, 35, 180, L4);
	mvwprintw(this->_win, 36, 180, L5);
	mvwprintw(this->_win, 37, 180, L6);
	// wattroff(this->_win, COLOR_PAIR(1));
}

void	Window::createWin() {
	this->_win = newwin(40, 220, 1, 1);
	wattron(this->_win, COLOR_PAIR(4));
	wborder(this->_win, 100, 100, 124, 124,124, 124, 124, 124);
	
	mvwvline(this->_win, 0, 50, 124, 40);
	mvwvline(this->_win, 0, 107, 124, 40);
	mvwvline(this->_win, 0, 160, 124, 40);
	mvwhline(this->_win, 20, 0, 124, 160);
	printExtraInfo();
	wrefresh(this->_win);
}

