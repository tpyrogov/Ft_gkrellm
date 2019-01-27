/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpyrogov <tpyrogov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:02:15 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 21:56:03 by tpyrogov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostnameModule.hpp"
#include <unistd.h>
#include <string>

HostnameModule::HostnameModule () {}

HostnameModule::HostnameModule(HostnameModule const &rhs) 
{
	*this = rhs;
	return;
}

HostnameModule::~HostnameModule(void) {}

HostnameModule & HostnameModule::operator=(HostnameModule const &)
{
	return (*this);
}

std::string HostnameModule::getHostName() {
	char	name[1023];

	gethostname(name, 1023);

	std::string s(name);
	std::string::size_type pos = s.find('.');

	return (s.substr(0, pos));
}

std::string HostnameModule::getUserName() {
	return (getenv("USER"));
}

std::string		HostnameModule::read_from_file(std::string name) {
	return name;
}