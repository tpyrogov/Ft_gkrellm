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
#include <fstream>

class IMonitorModule {
public:
	IMonitorModule();
	IMonitorModule(IMonitorModule const &rhs);
	~IMonitorModule();
	IMonitorModule &	operator=(IMonitorModule const & rhs);

	virtual std::string		read_from_file(std::string name) = 0;
};

#endif
