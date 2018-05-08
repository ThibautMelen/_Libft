/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 21:59:27 by thmelen           #+#    #+#             */
/*   Updated: 2018/05/08 21:59:35 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_read_file(int fd)
{
	char	*content;
	char	*buff;
	char	*tmp;
	int		ret;

	if (!(buff = malloc(sizeof(char *) * (BUFF_SIZE + 1))))
		ft_exit_program(MALLOC_ERROR);
	if (!(content = ft_strnew(1)))
		ft_exit_program(MALLOC_ERROR);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = content;
		if (!(content = ft_strjoin(tmp, buff)))
			ft_exit_program(MALLOC_ERROR);
		free(tmp);
	}
	if (ret == -1)
		ft_exit_program(READ_FILE_ERROR);
	return (content);
}
