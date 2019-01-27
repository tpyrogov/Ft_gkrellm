/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 12:56:43 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 12:56:45 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay () {}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const &rhs) 
{
	*this = rhs;
	return;
}

// IMonitorDisplay::IMonitorDisplay(std::string const name) {}

IMonitorDisplay::~IMonitorDisplay(void) {}

IMonitorDisplay & IMonitorDisplay::operator=(IMonitorDisplay const &)
{
	return (*this);
}
