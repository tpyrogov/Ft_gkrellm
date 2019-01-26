/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 12:56:38 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 12:56:40 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

#include <iostream>

class IMonitorDisplay
{
public:
	IMonitorDisplay();
	IMonitorDisplay(std::string const name);
	IMonitorDisplay(IMonitorDisplay const &rhs);
	~virtual IMonitorDisplay();
	IMonitorDisplay &	operator=(IMonitorDisplay const & rhs);
};

#endif
