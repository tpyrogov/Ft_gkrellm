/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:14 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:07:16 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP
# define CPUMODULE_HPP

#include <iostream>

class CpuModule
{
public:
	CpuModule();
	CpuModule(std::string const name);
	CpuModule(CpuModule const &rhs);
	~CpuModule();
	CpuModule &	operator=(CpuModule const & rhs);
private:

};

#endif
