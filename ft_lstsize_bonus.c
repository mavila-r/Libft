/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:00:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/05/11 12:26:10 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*here;

	if (!lst)
		return (0);
	len = 1;
	here = lst;
	while (here->next != NULL)
	{
		here = here->next;
		len++;
	}
	return (len);
}
