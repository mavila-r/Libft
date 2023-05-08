/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:31:39 by mavila-r          #+#    #+#             */
/*   Updated: 2023/05/08 12:43:33 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	int		i;

	if (!s || !f)
		return (NULL);
len = ft_strlen(s);
str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
	i++;
	}
str[i] = '\0';
	return (str);
}
