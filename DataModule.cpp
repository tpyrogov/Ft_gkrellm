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
	std::time_t  now = std::time(0);
	static const char mon_name[][4] = {
			"Jan", "Feb", "Mar", "Apr", "May", "Jun",
			"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	tm* localtm = localtime(&now);

	sprintf(_time, "%d %s %d",
			localtm->tm_mday, mon_name[localtm->tm_mon], 1900 + localtm->tm_year);

	return (_time);
}

char *DataModule::getDate() {
	std::time_t  now = std::time(0);

	tm* localtm = localtime(&now);
	std::string str_time = "";

	sprintf(_date, "%.2d:%.2d:%.2d",
			localtm->tm_hour,
			localtm->tm_min, localtm->tm_sec);
	return (_date);
}
