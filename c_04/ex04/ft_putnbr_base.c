int ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int is_it_twice(char *base)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_strlen(base);
	while( base[i] != '\0')
	{
		j = i+1;
		while ( j < size)
		{
			if(base[i] == base[j])
				return (0);
		}
		i++;
	}
	return (1);
}

int base_control(char *base)
{
	int		i;
	int		size;
	i = 0;
	size = ft_strlen(base);
	if( is_it_twice_check(base))
		return (0);
	if (size == 0 || size == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

ft_putnbr_base(int nbr, char *base)
{

}
