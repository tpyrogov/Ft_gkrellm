/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winSDL.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 10:34:47 by lpohribn          #+#    #+#             */
/*   Updated: 2019/01/27 10:34:48 by lpohribn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_init_sdl()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		return;
	if (TTF_Init() == -1)
		return ;
	if (!(font = TTF_OpenFont("font.ttf", 60)))
		return ;
	if (!(win = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, WIN_W, WIN_H, 0)))
		return ;
	if (!(d->s = SDL_GetWindowSurface(d->win)))
		ft_error(d, 7);
}
