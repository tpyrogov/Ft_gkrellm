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

<<<<<<< HEAD
// IMonitorModule::IMonitorModule(std::string const name) {}

=======
>>>>>>> b741b8f19c3a14802cc73929f1f7c3c368ba967b
IMonitorModule::~IMonitorModule(void) {}

IMonitorModule & IMonitorModule::operator=(IMonitorModule const &)
{
	return (*this);
}

