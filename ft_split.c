#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(const char *str)
{
	size_t	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

static int countwords(char const *s, char c)
{
int	trigger;
int	count;
int	i;

trigger = 0;
count = 0;
i = 0;
while(s[i] != '\0')
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

static char	*cpyword(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1)*sizeof(char));
	if (!word)
        return (0);
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void freesplit(char **split)
{
int	i;
i = 0;
while(split[i])
{
	free(split[i]);
	i++;
}
free(split);
}

char **ft_split(char const *s, char c)
{
size_t	i;
size_t	j;
int		index;
char	**split;

if(!s || !(split = malloc((countwords(s,c)+1)*sizeof(char *))))
{
	freesplit(split);
	return(NULL);
}
i = 0;
j = 0;
index = -1;
while (i <= ft_strlen(s))
{
	if (s[i] != c && index < 0)
		index = i;
	else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
	{
		split[j++] = cpyword(s,index,i);
		index = -1;
	}
	i++;
}
split[j] = 0;
return(split);
}

/* int main(void)
{
	int i;
	char	**frase;

	i = 0;
	frase = ft_split("Holaquétalcomoestamos", 'a');
	printf("%d\n", countwords("Holaquétalcomoestamos",'a'));
	printf("%d\n", ft_strlen("Holaquétalcomoestamos"));
	while(i <= countwords("Holaquétalcomoestamos",'a'))
	{
	printf("String %d: %s\n", i , frase[i]);
	i++;
	}
	return(0);
} */