/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:02:40 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 14:02:42 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataModule.hpp"
#include <ctime>
#include <cstdlib>

DataModule::DataModule () {}

DataModule::DataModule(DataModule const &rhs) 
{
	*this = rhs;
	return;
}

DataModule::~DataModule(void) {}

DataModule & DataModule::operator=(DataModule const &)
{
	return (*this);
}

std::string DataModule::read_from_file(std::string name) {
	return name;
}

char *DataModule::getTime() {
	std::time_t  now = time(0);
	char *buffer = new char[30];

	tm* localtm = localtime(&now);

	strftime(buffer,sizeof(buffer),"%H:%M:%S", localtm);

	return (buffer);
}

char *DataModule::getDate() {
	std::time_t  now = time(0);
	char *buffer = new char[30];

	tm* localtm = localtime(&now);

	strftime(buffer,sizeof(buffer),"%d.%m.%y ", localtm);

	return (buffer);
}
