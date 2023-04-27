/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:50:45 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:51:58 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memo;
	size_t	i;

	i = 0;
	memo = malloc(count * size);
	if (memo == NULL)
		return (memo);
	while (i < (count * size))
	{
		memo[i] = 0;
		i++;
	}
	return (memo);
}

/* int main(void)
{
	printf("%p\n", ft_calloc(6,5));
	printf("%p\n", calloc(6,5));
	return (0);
} */