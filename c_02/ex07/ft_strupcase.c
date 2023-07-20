/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:07:32 by gagir             #+#    #+#             */
/*   Updated: 2023/07/20 14:46:27 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		traveller;

	traveller = 0;
	while (str[traveller] != '\0')
	{
		if ((str[traveller] >= 'a') && (str[traveller] <= 'z'))
			str[traveller] -= 'a' - 'A';
		traveller++;
	}
	return (str);
}
