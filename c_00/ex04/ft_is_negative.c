/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:07:49 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 17:27:09 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char x )
{
	write(1, &x, 1);
}

void	ft_is_negative( int n )
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
