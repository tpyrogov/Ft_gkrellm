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

#include "IMonitorModule.hpp"

class DataModule : public IMonitorModule{
public:
	DataModule();
	DataModule(DataModule const &rhs);
	~DataModule();
	DataModule &	operator=(DataModule const & rhs);

	char *getTime();
	char *getDate();

	virtual std::string		read_from_file(std::string name);
private:

};

#endif
