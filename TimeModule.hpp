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

class TimeModule
{
public:
	TimeModule();
	TimeModule(std::string const name);
	TimeModule(TimeModule const &rhs);
	~TimeModule();
	TimeModule &	operator=(TimeModule const & rhs);
private:

};

#endif
