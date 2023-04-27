/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:02:58 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/26 10:49:11 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n1;
	size_t	n2;

	if (needle[0] == '\0' || (len == 0 && !haystack))
		return ((char *)haystack);
	n1 = 0;
	while (haystack[n1] && n1 < len)
	{
		n2 = 0;
		while (needle[n2] && ((n1 + n2) < len))
		{
			if (haystack[n1 + n2] == needle[n2])
					n2++;
			else
				break ;
		}
		if (needle[n2] == '\0')
			return ((char *)haystack + n1);
		n1++;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "Socorro diosito";
	char to_find[] = "io";
	size_t len = 20;
	printf("%s\n", ft_strnstr(str, to_find, len));
	return(0);
} */