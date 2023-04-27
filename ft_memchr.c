/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:54:23 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/26 10:36:22 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			i;

str = (unsigned char *)s;
character = (unsigned char)c;
i = 0;
	while (i < n)
	{
		if (*str == character)
			return (str);
	str++;
	i++;
	}
	return (NULL);
}
/* int main(void)
{
const char	*s;
int c;
size_t n;

s = "holi que tal";
c = 'o';
n = 1;
printf("%p", ft_memchr(s,c,n));
printf("\n");
printf("%p", memchr(s,c,n));
return (0);
}*/