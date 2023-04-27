/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:57:35 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:46:53 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

i = 0;
str1 = (const unsigned char *)s1;
str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	i++;
	}
	return (0);
}

/* int main(void)
{
	char s1[]= "We are the world";
	char s2[]= "Fray Perico";
	size_t n;
	n = 6;
	printf("%d\n", ft_memcmp(s1,s2,n));
	printf("%d\n", memcmp(s1,s2,n));
	return (0);
} */