/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:18:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 15:50:32 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		n;
	int		i;

n = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
s2 = (char *)malloc(n + 1);
	if (s2 == NULL)
		return (NULL);
i = 0;
	while (s1[i] != '\0')
	{
	s2[i] = s1[i];
	i++;
	}
s2[i] = '\0';
	return (s2);
}
/* 
int main(void)
{
char	src[] = "Este es el string";
char	*nstr;

nstr = ft_strdup(src);

printf("%s\n", nstr);
return(0);
} */