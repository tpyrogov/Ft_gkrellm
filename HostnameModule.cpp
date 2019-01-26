/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:02:15 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 14:02:17 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostnameModule.hpp"

HostnameModule::HostnameModule () {}

HostnameModule::HostnameModule(HostnameModule const &rhs) 
{
	*this = rhs;
	return;
}

HostnameModule::HostnameModule(std::string const name) {}

HostnameModule::~HostnameModule(void) {}

HostnameModule & HostnameModule::operator=(HostnameModule const &)
{
	return (*this);
}
