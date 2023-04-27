/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:49:38 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:50:22 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n1;
	size_t	n2;
	size_t	res;

	n1 = 0;
	n2 = 0;
	res = 0;
	while (dst[n1] != '\0')
	n1++;
	while (src[res] != '\0')
	res++;
	if (dstsize < n1)
		res = res + dstsize;
	else
		res = res + n1;
	while (src[n2] != '\0' && (n1 + 1) < dstsize)
	{
	dst[n1] = src[n2];
	n1++;
	n2++;
	}
	dst[n1] = '\0';
	return (res);
}

/* int	main(void)
{
	char	src[] = "Este es el";
	char	dest[] = "maldito textito";
	int size;

	size = 22;
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
} */