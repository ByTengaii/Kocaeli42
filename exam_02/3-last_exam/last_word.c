#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void last_word(char *str)
{
	int last_index = ft_strlen(str) - 1;

	while (str[last_index] == '\t' || str[last_index] == ' ')
		last_index--;
	while (!(str[last_index] == '\t' || str[last_index] == ' '))
		last_index--;
	last_index++;
	while (!(str[last_index] == '\t' || str[last_index] == ' ') || str[last_index] == '\0')
		write(1, &str[last_index++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word( av[1]);
	}
	else
		write(1, "\n", 1);
}
