/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpyrogov <tpyrogov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:14 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 18:39:28 by tpyrogov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP
# define CPUMODULE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "IMonitorModule.hpp"

class CpuModule : public IMonitorModule {
public:
	CpuModule();
	CpuModule(CpuModule const &rhs);
	virtual ~CpuModule();

	CpuModule &	operator=(CpuModule const & rhs);

	virtual std::string		read_from_file(std::string name);
	char *		getModel();
	char *		getUserUsage();
	char *		getSysUsage();
	char *		getIdleUsage();
	char *		getClockRate();
	char *		getLoadAvg();

	int		getCoreNumber();

private:

};

#endif
