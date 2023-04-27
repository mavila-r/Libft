/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:16:29 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 11:16:29 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	trigger;
	int	count;
	int	i;

trigger = 0;
count = 0;
i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && trigger == 0)
		{
		trigger = 1;
		count++;
		}
		else if (s[i] == c)
		trigger = 0;
	i++;
	}
	return (count);
}

/* static void	freesplit(char **split)
{
	int	i;

i = 0;
	while (split[i])
	{
		free(split[i]);
	i++;
	}
	free(split);
} */

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	wordlen;
	char	**split;

split = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wordlen = ft_strlen(s);
			else
				wordlen = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, wordlen);
			s = s + wordlen;
		}
	}
	split[i] = NULL;
	return (split);
}

/* int main(void)
{
	int i;
	char	**frase;

	i = 0;
	frase = ft_split("Holaquétalcomoestamos", 'a');
	printf("%d\n", countwords("Holaquétalcomoestamos",'a'));
	printf("%zu\n", ft_strlen("Holaquétalcomoestamos"));
	while(i <= countwords("Holaquétalcomoestamos",'a'))
	{
	printf("String %d: %s\n", i , frase[i]);
	i++;
	}
	return(0);
} */