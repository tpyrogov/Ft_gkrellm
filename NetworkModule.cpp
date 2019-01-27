/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:34 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:07:37 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule () {}

NetworkModule::NetworkModule(NetworkModule const &rhs) 
{
	*this = rhs;
	return;
}

// NetworkModule::NetworkModule(std::string const name) {}

NetworkModule::~NetworkModule(void) {}

NetworkModule & NetworkModule::operator=(NetworkModule const &)
{
	return (*this);
}
