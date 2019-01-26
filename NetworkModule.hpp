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

class NetworkModule
{
public:
	NetworkModule();
	NetworkModule(std::string const name);
	NetworkModule(NetworkModule const &rhs);
	~NetworkModule();
	NetworkModule &	operator=(NetworkModule const & rhs);
private:

};

#endif
