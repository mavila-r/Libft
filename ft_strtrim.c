/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:12:45 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/27 09:25:38 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	trimstart(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

len = ft_strlen(s1);
i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static size_t	trimend(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

len = ft_strlen(s1);
i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	inicio;
	size_t	final;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	inicio = trimstart(s1, set);
	final = trimend(s1, set);
	if (inicio >= final)
		return (ft_strdup(""));
	strim = (char *)malloc(sizeof(char) *(final - inicio + 1));
	if (strim == NULL)
		return (NULL);
	ft_strlcpy(strim, s1 + inicio, final - inicio + 1);
	return (strim);
}

/* int main(void)
{
	char const *set;
	char const *s1;

	set = "su";
	s1 = "susuholiwisusu";
	printf("%zu\n", trim1(s1, set));
	printf("%zu\n", trim2(s1, set));
	printf("%s", ft_strtrim(s1, set));
	return (0);
} */
