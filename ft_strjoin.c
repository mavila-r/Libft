/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:50:03 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/27 09:09:19 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len1;
	int		len2;
	int		i;

	if (s1 && s2)
	{	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) *(len1 + len2 + 1));
		if (s3 == NULL)
			return (NULL);
	i = -1;
		while (s1[++i])
		s3[i] = s1[i];
	i = -1;
		while (s2[++i])
		{
			s3[len1] = s2[i];
		len1++;
		}
	s3[len1] = '\0';
		return (s3);
	}
	return (NULL);
}

/* int main(void)
{
	char	dest[30] = "El textito";
	char	src[] = "El segundo texto";

	printf("%s\n", ft_strjoin(dest, src));
} */
