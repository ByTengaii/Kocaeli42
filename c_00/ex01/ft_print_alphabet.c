/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:07:05 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 16:07:10 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar( char c ){
	write(1,&c,1)
}

void ft_print_alphabet(void){

	//Define begining of alphabet
	char letter;
	char ='a';

	//start printing
	while(letter <= 'z'){
		ft_putchar(letter);
		letter++;
	}

}
