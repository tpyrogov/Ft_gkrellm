/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:38:57 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 13:38:59 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"

int	main() {
	CpuModule os;

	std::string s = os.getModel();

	std::cout << s << std::endl << os.getUserUsage() << std::endl << os.getSysUsage() ;
	return 0;
}
