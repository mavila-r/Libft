/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:33:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/04/25 11:33:12 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static long int	intlen(long int n)
{
	int	len;

	len = 0;
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	num;
	char		*str;

	num = n;
	if (num < 0)
		num = num * -1;
	len = intlen(num);
	if (n < 0)
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len--] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* int main(void)
{
	int n;
	n = -12345;
	printf("%ld\n", intlen(n));
	printf("%s", ft_itoa(n));
	return(0);
} */