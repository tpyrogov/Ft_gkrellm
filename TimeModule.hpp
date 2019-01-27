/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TimeModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:06:23 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:06:25 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TimeModule_HPP
# define TimeModule_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class TimeModule : public IMonitorModule {
public:
	TimeModule();
	TimeModule(TimeModule const &rhs);
	~TimeModule();
	TimeModule &	operator=(TimeModule const & rhs);

	virtual std::string		read_from_file(std::string name);
private:

};

#endif
