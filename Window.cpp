/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:53:22 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 16:53:23 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataModule.hpp"

DataModule::DataModule () {}

DataModule::DataModule(DataModule const &rhs) 
{
	*this = rhs;
	return;
}

DataModule::DataModule(std::string const name) {}

DataModule::~DataModule(void) {}

DataModule & DataModule::operator=(DataModule const &)
{
	return (*this);
}
