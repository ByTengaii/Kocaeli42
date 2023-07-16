/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:07:32 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 22:08:35 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*#include<stdio.h>
 * int    main()
{
    char str[] = "abcdefghj";
    printf("%s", ft_strupcase(str));
}*/
