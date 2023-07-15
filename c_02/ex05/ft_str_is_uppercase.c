/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:20:32 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 20:22:12 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 'A') || (str[counter] > 'Z'))
			return (0);
		counter++;
	}
	return (1);
}
/*#include<stdio.h>
 * int    main()
{
       printf("%d", ft_str_is_uppercase("ABCDEFGH"));
       printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
       printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}*/
