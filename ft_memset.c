/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:55:53 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:51:18 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
	str[i] = (unsigned char)c;
	i++;
	}
	return (b);
}

/* int	main(void)
{
	char	b[25];
	int		c;
	size_t	len;
	char	*ptr;
	
	ptr = &b[0];
	//b = "Holi que pasa colega";
	c = 98;
	len = 3;
	printf("%s", ft_memset(b, c, len));
	return (0);
} */
