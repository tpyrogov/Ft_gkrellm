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

class RamModule
{
public:
	RamModule();
	RamModule(std::string const name);
	RamModule(RamModule const &rhs);
	~RamModule();
	RamModule &	operator=(RamModule const & rhs);
private:

};

#endif
