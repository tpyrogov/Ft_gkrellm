/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpyrogov <tpyrogov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:05:32 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 21:55:23 by tpyrogov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAMEMODULE_HPP
# define HOSTNAMEMODULE_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class HostnameModule : public IMonitorModule {
public:
	HostnameModule();
	HostnameModule(HostnameModule const &rhs);
	virtual ~HostnameModule();

	HostnameModule &	operator=(HostnameModule const & rhs);

	std::string		getHostName();
	std::string		getUserName();
	virtual std::string		read_from_file(std::string name);
private:

};

#endif

