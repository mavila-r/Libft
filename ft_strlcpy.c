/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:26:04 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:50:18 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	num;
	size_t	res;

	num = 0;
	res = 0;
	while (src[res] != '\0')
	{
		res++;
	}
	if (dstsize < 1)
	{
		return (res);
	}
	while (src[num] != '\0' && num < dstsize -1)
	{
		dst[num] = src[num];
		num++;
	}
	dst[num] = '\0';
	return (res);
}

/* int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "Aqui va el puto texto";
	size = 15;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
} */
