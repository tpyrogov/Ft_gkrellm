/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:06:43 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:06:44 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"

CpuModule::CpuModule () : IMonitorModule() {}

CpuModule::CpuModule(CpuModule const &rhs)
{
	*this = rhs;
	return;
}

// CpuModule::CpuModule(std::string const name) {}

CpuModule::~CpuModule(void) {
	IMonitorModule::~IMonitorModule();
}

CpuModule & CpuModule::operator=(CpuModule const &)
{
	return (*this);
}

char	*CpuModule::getModel() {
	std::string result = read_from_file("get_cpu_model.sh");

	char * str = new char [result.size()];
	strcpy(str, result.c_str());
	return (str);
}

char *CpuModule::getUserUsage() {
	std::string result = read_from_file("get_cpu_user.sh");

	char * str = new char [result.size()];
	strcpy(str, result.c_str());

	return (str);
}

char *CpuModule::getSysUsage() {
	std::string result = read_from_file("get_cpu_sys.sh");

	char * str = new char [result.size()];
	strcpy(str, result.c_str());

	return (str);
}

char *CpuModule::getIdleUsage() {
	std::string result = read_from_file("get_cpu_idle.sh");

	char * str = new char [result.size()];
	strcpy(str, result.c_str());

	return (str);
}

std::string		CpuModule::read_from_file(std::string name) {
	name.append(" > temp");
	std::string command = "sh ";
	command.append(name);
	std::system(command.c_str());
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


