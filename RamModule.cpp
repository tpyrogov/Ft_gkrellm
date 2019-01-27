/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:06:53 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:06:54 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RamModule.hpp"

RamModule::RamModule () {}

RamModule::RamModule(RamModule const &rhs) 
{
	*this = rhs;
	return;
}

RamModule::~RamModule(void) {}

RamModule & RamModule::operator=(RamModule const &)
{
	return (*this);
}

std::string RamModule::read_from_file(std::string name) {
	name.append(" > temp");
	std::string command = "sh ./resources/";
	command.append(name);
	std::system(command.c_str());

	std::ifstream	file("temp", std::ios::in);
	std::string		result = "";
	std::string		word;

	if (file) {

		while (getline(file, word)) {
			result += word;
		}
		file.close();
	}
	remove("temp");
	return (result);
}

char *RamModule::getRamUsed() {
	std::string ram = read_from_file("get_ram.sh");

	ram = ram.substr(0, ram.find(' '));

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}

char *RamModule::getRamIdle() {
	std::string ram = read_from_file("get_ram.sh");

	ram = ram.substr(ram.find(' ') + 1);

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}

char *RamModule::getToatal() {
	std::string::size_type sz;
	int	used = std::stoi(getRamUsed(), &sz);
	int	idle = std::stoi(getRamIdle(), &sz);

	std::string result = std::to_string(used+ idle);

	result += "M";

	char * str = new char [result.size()];
	strcpy(str, result.c_str());

	return (str);
}


