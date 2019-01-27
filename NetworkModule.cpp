/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:34 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:07:37 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule () {}

NetworkModule::NetworkModule(NetworkModule const &rhs) 
{
	*this = rhs;
	return;
}

NetworkModule::~NetworkModule(void) {}

NetworkModule & NetworkModule::operator=(NetworkModule const &) {
	return (*this);
}

std::string NetworkModule::read_from_file(std::string name) {
	name.append(" > temp");
	std::string command = "sh ./resources/";
	command.append(name);
	std::system(command.c_str());

	std::ifstream	file("temp", std::ios::in);
	std::string		result = "";
	std::string		word;

	if (file) {

		while (getline(file, word)) {
			result += (word +  "\n");
		}
		file.close();
	}
	result = result.substr(result.find("ts: ") + 3, result.size());
	remove("temp");
	return (result);
}

char *NetworkModule::getInPacketsNum() {
	std::string ram = NetworkModule::read_from_file("get_network.sh");

	ram = ram.substr(1, ram.find('/') - 1);

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}

char *NetworkModule::getOutPacketsNum() {
	std::string ram = NetworkModule::read_from_file("get_network.sh");

	ram = ram.substr(ram.find("in") + 4);
	ram = ram.substr(0, ram.find('/'));

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}

char *NetworkModule::getInPacketsWeight() {
	std::string ram = NetworkModule::read_from_file("get_network.sh");

	ram = ram.substr(ram.find('/') + 1);
	ram = ram.substr(0, ram.find(" in"));

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}

char *NetworkModule::getOutPacketsWeight() {
	std::string ram = NetworkModule::read_from_file("get_network.sh");

	ram = ram.substr(ram.rfind('/') + 1);
	ram = ram.substr(0, ram.find("out"));

	char * str = new char [ram.size()];
	strcpy(str, ram.c_str());
	return (str);
}
