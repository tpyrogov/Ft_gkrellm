/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 12:56:20 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 12:56:21 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"

IMonitorModule::IMonitorModule () {}

IMonitorModule::IMonitorModule(IMonitorModule const &rhs) 
{
	*this = rhs;
	return;
}

IMonitorModule::IMonitorModule(std::string const name) {}

IMonitorModule::~IMonitorModule(void) {}

IMonitorModule & IMonitorModule::operator=(IMonitorModule const &)
{
	return (*this);
}

