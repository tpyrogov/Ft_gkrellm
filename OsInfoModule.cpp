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

#include "OsInfoModule.hpp"

OsInfoModule::OsInfoModule () {}

OsInfoModule::OsInfoModule(OsInfoModule const &rhs) 
{
	*this = rhs;
	return;
}

OsInfoModule::OsInfoModule(std::string const name) {}

OsInfoModule::~OsInfoModule(void) {}

OsInfoModule & OsInfoModule::operator=(OsInfoModule const &)
{
	return (*this);
}
