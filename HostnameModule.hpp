/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:05:32 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:05:34 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAMEMODULE_HPP
# define HOSTNAMEMODULE_HPP

#include <iostream>

class HostnameModule
{
public:
	HostnameModule();
	HostnameModule(HostnameModule const &rhs);
	virtual ~HostnameModule();

	HostnameModule &	operator=(HostnameModule const & rhs);

	std::string		getHostName();
	std::string		getUserName();
private:

};

#endif

