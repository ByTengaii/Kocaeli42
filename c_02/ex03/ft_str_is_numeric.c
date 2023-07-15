/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:17:00 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 20:17:44 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < '0') || (str[a] > '9'))
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
 * int    main()
{
    printf("%d", ft_str_is_numeric("01948987493"));
    printf("\n%d", ft_str_is_numeric("0484882j8995489"));
    printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}*/
