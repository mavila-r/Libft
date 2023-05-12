/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:20:28 by mavila-r          #+#    #+#             */
/*   Updated: 2023/05/12 13:20:27 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*here;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		here = ft_lstnew(f(lst->content));
		if (here)
		{
			ft_lstadd_back(&new, here);
		lst = lst->next;
		}
		else
		{
			ft_lstclear(&here, del);
			return (NULL);
		}
	}
	return (new);
}
