/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:00:49 by gagir             #+#    #+#             */
/*   Updated: 2023/07/20 14:46:12 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		traveller;

	traveller = 0;
	while (str[traveller] != '\0')
	{
		if ((str[traveller] < 32) || (str[traveller] > 126))
			return (0);
		traveller++;
	}
	return (1);
}
