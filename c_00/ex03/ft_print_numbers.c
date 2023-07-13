/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:07:35 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 16:07:37 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_print_numbers(void){
	
	char  number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

