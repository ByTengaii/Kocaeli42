/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:20:37 by gagir             #+#    #+#             */
/*   Updated: 2023/07/29 21:23:05 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_it_twice(char *base, unsigned int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_control(char *base, unsigned int size)
{
	int		i;

	i = 0;
	if (!is_it_twice(base, size))
		return (0);
	if (size == 0 || size == 1 || size == 2)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+') || (base[i] == ' '))
			return (0);
		i++;
	}
	return (i);
}

void	ft_put_base_rec(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	unsigned int	b;
	char			c;

	b = size - 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= b)
		ft_put_base_rec(n / b, base, size);
	c = base[(n % b)];
	write(1, &c, 1);
}

int	symbol_value(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_pow(int base, int pow)
{
	int	p;
	int	result;

	p = 0;
	result = 1;
	while (p < pow)
	{
		result *= base;
		p++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int		size;
	int		last_index;
	int		result;
	int		step;

	step = 0;
	result = 0;
	size = ft_strlen(base) + 1;
	last_index = ft_strlen(str) - 1;
	if (base_control(base, size) == 0)
		return (0);
	while (last_index >= 0)
		result += (symbol_value(str[last_index--], base) * ft_pow((size - 1), step++));
	return result;
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d\n",ft_atoi_base(av[1], av[2]));
	return 0;
}
