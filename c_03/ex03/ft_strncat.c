/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:54:28 by gagir             #+#    #+#             */
/*   Updated: 2023/07/18 21:54:32 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0' && nb--) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
	return (dest);
}
