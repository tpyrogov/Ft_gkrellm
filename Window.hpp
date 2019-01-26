/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:53:36 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/26 16:53:38 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

#include <iostream>

class Window
{
public:
	Window();
	Window(std::string const name);
	Window(Window const &rhs);
	~Window();
	Window &	operator=(Window const & rhs);
private:

};

#endif
