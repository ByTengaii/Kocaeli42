#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}


int	strlen(char *str)
{
	int		i;

	i=0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkLog(char *log, char c)
{
	int i = 0;

	while (log[i] != '\0')
	{
		if (log[i] == c)
			return (1);
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int		size;
	int		log_index;
	int		i;
	int		j;

	i = 0;
	j = 0;
	log_index = 0;
	size = strlen(str1);
	
	char 	log[size];
	
	while (str1[i] != '\0')
	{
		j = 0;
		if (!checkLog(log, str[i]))
		{
			while (str2[j] != '\0')
			{
				if (str1[i] == str2[j])
			}
		}	
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);

}
