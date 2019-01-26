/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OsInfoModule.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:02:30 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 14:02:32 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "OsInfoModule.hpp"

OsInfoModule::OsInfoModule() {}

OsInfoModule::OsInfoModule(OsInfoModule const &rhs) 
{
	*this = rhs;
	return;
}

OsInfoModule::OsInfoModule(std::string const name) {}

OsInfoModule::~OsInfoModule(void) {

}

OsInfoModule & OsInfoModule::operator=(OsInfoModule const &)
{
	return (*this);
}

char	*OsInfoModule::getOSInfo() {
	std::system("sw_vers > temp");
	std::ifstream	file("temp", std::ios::in);
	std::string		result = "";
	std::string		word;

	if (file) {

		while (getline(file, word))
			result += (word + "\n");

		file.close();
	}
	remove("temp");
	char * str = new char [result.size()];
	strcpy(str, result.c_str());
	return (str);
}
