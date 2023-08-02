/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:31:02 by gagir             #+#    #+#             */
/*   Updated: 2023/08/02 17:40:39 by gagir            ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	j;

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
		if ((base[i] == '-') || (base[i] == '+'))
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = ft_strlen(base) + 1;
	if (base_control(base, size) == 0)
		return ;
	else
		ft_put_base_rec(nbr, base, size);
}
