/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:08:20 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 18:07:06 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_buffer(char buffer[], int index)
{
	while (index > 0)
	{
		write(1, &buffer[--index], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		index;
	int		is_negative;

	index = 0;
	is_negative = 0;
	if (nb == 0)
	{
		buffer[0] = '0';
		write(1, &buffer, 1);
		return ;
	}
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb; 
	}
	while (nb > 0)
	{
		buffer[index++] = '0' + (nb % 10);
		nb /= 10;
	}
	if (is_negative)
		buffer[index++] = '-';
	write_buffer(buffer, index);
}
