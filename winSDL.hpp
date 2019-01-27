/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winSDL.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 10:34:53 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 10:34:54 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WINSDL_HPP
# define WINSDL_HPP

class WinSDL
{
public:
	WinSDL();
	// WinSDL(std::string const name);
	WinSDL(WinSDL const &rhs);
	~WinSDL();
	WinSDL &	operator=(WinSDL const & rhs);

	void	InitScreen();
	void	createWin();
	void	keyEvents();
	void	HostnameMod();
	void	OsInfoMod();
	void	TimeMod();
	void	CpuMod();
	void	RamMod();
	void	NetMod();
	void	printExtraInfo();

private:
	Window *_win;

};

#endif

