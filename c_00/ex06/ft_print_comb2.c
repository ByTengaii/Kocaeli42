/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:08:11 by gagir             #+#    #+#             */
/*   Updated: 2023/07/14 11:42:07 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_to_buffer(char *buffer, int i, int j)
{
	buffer[0] = '0' + (i / 10);
	buffer[1] = '0' + (i % 10);
	buffer[2] = ' ';
	buffer[3] = '0' + (j / 10);
	buffer[4] = '0' + (j % 10);
	buffer[5] = ',';
	buffer[6] = ' ';
	if (i == 98)
	{
		write(1, buffer, 5);
	}
	else
	{
		write(1, buffer, 7); 
	}
}

void	ft_print_comb2(void)
{
	char	buffer[7];
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_to_buffer(buffer, i, j);
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return	(0);
}*/
