/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:18:38 by gagir             #+#    #+#             */
/*   Updated: 2023/07/20 14:45:42 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		if ((str[d] < 'a') || (str[d] > 'z'))
			return (0);
		d++;
	}
	return (1);
}
