/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:10:02 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 20:30:37 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
#include<stdio.h>
int    main()
{
    printf("%d", ft_str_is_alpha("abcdefghijkl"));
    printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
    printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
	printf("\n%d", ft_str_is_alpha(""));
}*/
