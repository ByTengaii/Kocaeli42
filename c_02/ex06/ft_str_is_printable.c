/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:00:49 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 22:03:59 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*#include<stdio.h>
 * int    main()
{
    printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
    printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}*/