/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:06:47 by mavila-r          #+#    #+#             */
/*   Updated: 2023/05/12 11:45:19 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*here;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		here = *lst;
		*lst = here->next;
		free(here);
	}
	*lst = 0;
}
