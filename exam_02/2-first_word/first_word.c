#include <unistd.h>

void	write_first(char *str)
{
	int i = 0;

		while (str[i] == ' ' || str[i] == '\t' )
			i++;
		while (str[i] != ' ' && str[i] != '\0' && str[i] != '\t')
		 {
			 write(1, str+i, 1);
			 i++;
		 }	
}


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		write_first(av[1]);
	}
	else
		write(1, "\n", 1);
}
