/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:31:02 by gagir             #+#    #+#             */
/*   Updated: 2023/07/25 04:43:36 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			j++;
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
	if( is_it_twice(base))
		return (0);
	if (size == 0 || size == 1)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+'))
			return (0);
		i++;
	}
	return (i);
}

void	ft_put_base_rec (int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	char	c;
	
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
		ft_put_base_rec(n / size, base, size);
	c = base[(n % size)];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	
	size = ft_strlen(base);
	if (!base_control(base))
		return ;
	else
		ft_put_base_rec(nbr, base, size);
}

#include <stdio.h>
#include <stdlib.h>
int	main(char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
	return 0;
}

