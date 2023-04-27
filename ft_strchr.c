/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:48:09 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 17:39:35 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
	s++;
	}
	if (c == '\0' || c == 1024)
		return ((char *)s);
	return (0);
}
/* int main(void)
{
const char	*s;
int c;

s = "holi que tal";
c = 'q';
printf("%s", ft_strchr(s,c));
printf("\n");
printf("%s", strchr(s,c));
return (0);
} */