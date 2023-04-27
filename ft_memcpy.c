/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:06:48 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:51:28 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str1;
	char		*str2;
	size_t		cont;

str1 = (const char *)src;
str2 = (char *)dst;
cont = 0;
	if (!dst && !src)
		return (0);
	while (cont < n)
	{
	str2[cont] = str1[cont];
	cont++;
	}
	return (dst);
}

/* int	main(void)
{
	char	src[15] = "holaquetal";
	char	dst[15];

	printf("%s", ft_memcpy(dst, src, 7));
	return (0);
} */
