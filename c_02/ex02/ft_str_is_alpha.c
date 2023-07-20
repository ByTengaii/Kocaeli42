/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:10:02 by gagir             #+#    #+#             */
/*   Updated: 2023/07/20 14:45:00 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		traverser;

	traverser = 0;
	while (str[traverser] != '\0' )
	{
		if ((str[traverser] <= 'z' && str[traverser] >= 'a')
			|| (str[traverser] <= 'Z' && str[traverser] >= 'A'))
		{
			traverser++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
