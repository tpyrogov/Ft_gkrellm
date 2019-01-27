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
	std::string result;

	result = read_from_file("get_os_info.sh");

	char * str = new char [result.size()];
	strcpy(str, result.c_str());
	return (str);
}

std::string OsInfoModule::read_from_file(std::string name) {
	name.append(" > temp");
	std::string command = "sh ./resources/";
	command.append(name);
	std::system(command.c_str());

	std::ifstream	file("temp", std::ios::in);
	std::string		result = "";
	std::string		word;

	if (file) {

		while (getline(file, word))
			result += (word + " ");

		file.close();
	}
	remove("temp");
	return (result);
}
