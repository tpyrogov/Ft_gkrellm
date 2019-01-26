/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:17:17 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 15:17:18 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATAMODULE_HPP
# define DATAMODULE_HPP

#include <iostream>

class DataModule
{
public:
	DataModule();
	DataModule(std::string const name);
	DataModule(DataModule const &rhs);
	~DataModule();
	DataModule &	operator=(DataModule const & rhs);
private:

};

#endif
