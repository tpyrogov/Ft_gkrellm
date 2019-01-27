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

// RamModule::RamModule(std::string const name) {}

RamModule::~RamModule(void) {}

RamModule & RamModule::operator=(RamModule const &)
{
	return (*this);
}
