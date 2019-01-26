/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 12:56:27 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 12:56:28 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

#include <iostream>

class IMonitorModule
{
public:
	IMonitorModule();
	IMonitorModule(std::string const name);
	IMonitorModule(IMonitorModule const &rhs);
	~IMonitorModule();
	IMonitorModule &	operator=(IMonitorModule const & rhs);
};

#endif
