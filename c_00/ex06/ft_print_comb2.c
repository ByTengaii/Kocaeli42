/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:08:11 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 16:38:05 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb2(void) {
    char buffer[7];
    int i, j;

    for (i = 0; i <= 98; i++) {
        for (j = i + 1; j <= 99; j++) {
            buffer[0] = '0' + (i / 10);// tens digit
			buffer[1] = '0' + (i % 10); // ones digit
            buffer[2] = ' ';
            buffer[3] = '0' + (j / 10); //tens digit
            buffer[4] = '0' + (j % 10); // ones digit
            buffer[5] = ',';
            buffer[6] = ' ';

			if(i == 98){
				write(1,buffer,5);
			}else{
			 	write(1, buffer, 7); 
			}
        }
    }
}
