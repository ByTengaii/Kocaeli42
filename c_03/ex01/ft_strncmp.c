/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:45:23 by gagir             #+#    #+#             */
/*   Updated: 2023/07/18 21:45:26 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--) {
        if (*s1 != *s2)
            return *s1 - *s2;
        
        if (*s1 == '\0')
            return 0;
        
        s1++;
        s2++;
    }
    
    return 0;
}