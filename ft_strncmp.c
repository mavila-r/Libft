/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:52:38 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 18:06:54 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	num;

	num = 0;
	while ((s1[num] || s2[num]) && num < n)
	{
		if (s1[num] != s2[num])
			return (((unsigned char *)s1)[num] - ((unsigned char *)s2)[num]);
		++num;
	}
	return (0);
}

/* int main(void)
{
	char s1[]= "Corresto que tal";
	char s2[]= "We";
	size_t n;
	n = 5;
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1,s2,n));
	printf("%d\n", strncmp(s1,s2,n));
	return (0);
*/