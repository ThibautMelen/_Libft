/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_usage.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:56:55 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/08 21:59:21 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_show_usage(const char *name)
{
	ft_putstr("\033[31m[ ✘ ] usage: ");
	ft_putstr(name);
	ft_putendl(" {file}\n");
	ft_exit_program(NO_ERROR);
}
