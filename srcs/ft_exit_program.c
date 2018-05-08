/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:58:28 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/08 21:59:16 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_exit_program(int status)
{
	if (status < 0)
	{
		ft_putstr("error (");
		ft_putnbr(status);
		ft_putchar(')');
		ft_putchar('\n');
	}
	exit(status);
}
