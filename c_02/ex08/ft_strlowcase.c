/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:09:41 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 22:10:15 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)

{
	int		traveller;

	traveller = 0;
	while (str[traveller] != '\0')
	{
		if ((str[traveller] >= 'A') && (str[traveller] <= 'Z'))
			str[traveller] += 'a' - 'A';
		traveller++;
	}
	return (str);
}
/*#include<stdio.h>
 * int    main()
{
    char str[] = "ABCDEFGH";
    printf("%s", ft_strlowcase(str));
}*/
