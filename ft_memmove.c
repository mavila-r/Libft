/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:21:45 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 17:14:11 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	cont;

str1 = (char *)src;
str2 = (char *)dst;
cont = 0;
	if (str1 == NULL & str2 == NULL)
		return (NULL);
	if (str2 > str1)
	{
		while (len-- > 0)
		str2[len] = str1[len];
	}
	else
	{
		while (cont < len)
		{
		str2[cont] = str1[cont];
		cont++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char	src[15] = "holaquetal";
	char	dst[19] = "estoyagotada";

	printf("%s", ft_memmove(dst, src, 5));
	printf("\n");
	printf("%s", memmove(dst, src, 5));
	return (0);
}
 */