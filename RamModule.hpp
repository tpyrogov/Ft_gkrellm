/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:07:01 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:07:03 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_HPP
# define RAMMODULE_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class RamModule : public IMonitorModule{
public:
	RamModule();
	RamModule(RamModule const &rhs);
	~RamModule();
	RamModule &	operator=(RamModule const & rhs);

	virtual std::string		read_from_file(std::string name);

	char	*getRamUsed();
	char	*getRamIdle();
private:

};

#endif
