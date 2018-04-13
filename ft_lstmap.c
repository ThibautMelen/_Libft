/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 03:57:50 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/13 05:11:14 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_element;
	t_list *actual_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_element = f(lst);
	actual_list = new_element;
	while (lst)
	{
		actual_list->next = f(lst->next);
		actual_list = actual_list->next;
		lst = lst->next;
	}
	return (new_element);
}
