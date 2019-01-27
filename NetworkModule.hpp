/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:29 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:07:31 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMODULE_HPP
# define NETWORKMODULE_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class NetworkModule : public IMonitorModule{
public:
	NetworkModule();
	NetworkModule(NetworkModule const &rhs);
	~NetworkModule();
	NetworkModule &	operator=(NetworkModule const & rhs);

	virtual std::string		read_from_file(std::string name);

	char	*getInPacketsNum();
	char	*getOutPacketsNum();
	char	*getInPacketsWeight();
	char	*getOutPacketsWeight();

private:

};

#endif
