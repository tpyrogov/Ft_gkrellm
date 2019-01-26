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

CpuModule::CpuModule () {}

CpuModule::CpuModule(CpuModule const &rhs) 
{
	*this = rhs;
	return;
}

CpuModule::CpuModule(std::string const name) {}

CpuModule::~CpuModule(void) {}

CpuModule & CpuModule::operator=(CpuModule const &)
{
	return (*this);
}
