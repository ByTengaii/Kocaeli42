
char	*ft_strrev(char str[])
{
	int		size;
	int		begin;
	int		last;
	char	temp;
	size = 0;
	begin = 0;
	while (str[size] != '\0')
		size++;
	last = size - 1;
	while (begin < last)
	{
		temp = str[begin];
		str[begin] = str[last];
		str[last] = temp;
		begin++;
		last --;
	}

	return (str);
}

#include <stdio.h>

int	main()
{
	char str[] = "Hello";
	ft_strrev(str);

	printf("%s\n",str);
	return (0);
}
