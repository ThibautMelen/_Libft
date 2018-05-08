/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:58:53 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/08 21:59:06 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_open_file(char *path)
{
	int fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_exit_program(OPEN_FILE_ERROR);
	return (fd);
}
