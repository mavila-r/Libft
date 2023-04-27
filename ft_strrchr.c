/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:50:23 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 17:49:01 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
	i--;
	}
	return (NULL);
}

/* int main(void)
{
const char	*s;
int c;

s = "holi que tal quien eres";
c = 'q';
printf("%s", ft_strrchr(s,c));
printf("\n");
printf("%s", strrchr(s,c));
return (0);
}*/