/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OsInfoModule.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:03:53 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:06:05 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFOMODULE_HPP
# define OSINFOMODULE_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class OsInfoModule : public IMonitorModule {
public:
	OsInfoModule();
	OsInfoModule(OsInfoModule const &rhs);
	~OsInfoModule();

	OsInfoModule &	operator=(OsInfoModule const & rhs);

	virtual std::string		read_from_file(std::string name);

	char *		getOSInfo();
private:

};

#endif
