/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:18:38 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 20:19:10 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*#include <stdio.h>
 * int    main()
{
    printf("%d", ft_str_is_lowercase("abcdefghijkl"));
        printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
        printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}*/
