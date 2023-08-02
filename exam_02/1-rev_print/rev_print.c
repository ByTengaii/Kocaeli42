#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
int main(int ac, char **av)
{

	if (ac == 2)
	{
		int last_index =ft_strlen(av[1]);
		while (last_index >=0)
			write(1, &av[1][last_index--], 1);
	}

}
