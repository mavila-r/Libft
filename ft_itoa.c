#include <stdio.h>
#include <stdlib.h>

static long int intlen(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n/10;
	}
	return (len);
}

static char *tostr(char *str, unsigned int num, long int len)
{
	str[len] = 0;
	while (num > 0)
	{
		str[--len]=(num % 10) + 48;
		num = num/10;
	}
	return (str);
}

char *ft_itoa(int n)
{
	long int	len;
	int 		num;
	char		*str;

	num = 0;
	len = intlen(n);
	str = malloc((len + 1)*sizeof(char *));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	str = tostr(str,num,len);
return(str);
}

int main(void)
{
	int n;
	n = -12345;
	printf("%ld\n", intlen(n));
	printf("%s", ft_itoa(n));
	return(0);
}