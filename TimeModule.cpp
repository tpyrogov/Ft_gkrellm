/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TimeModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:06:31 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:06:33 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TimeModule.hpp"

TimeModule::TimeModule () {}

TimeModule::TimeModule(TimeModule const &rhs) 
{
	*this = rhs;
	return;
}

TimeModule::TimeModule(std::string const name) {}

TimeModule::~TimeModule(void) {}

TimeModule & TimeModule::operator=(TimeModule const &)
{
	return (*this);
}
