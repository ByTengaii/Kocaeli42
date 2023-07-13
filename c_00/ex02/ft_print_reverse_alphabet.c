/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:07:21 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 16:07:22 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar( char c ){
	write(1,&c,1)
}

void ft_print_alphabet(void){

	//Define begining of alphabet
	char letter;
	char ='z';

	//start printing
	while(letter >= 'a'){
		ft_putchar(letter);
		letter--;
	}

}
