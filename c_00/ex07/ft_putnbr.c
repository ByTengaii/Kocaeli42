/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir <gagir@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:08:20 by gagir             #+#    #+#             */
/*   Updated: 2023/07/13 16:08:22 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb){
	
	char buffer[12];
	int index=0;
	int is_negative = 0;//flag

	//Special case: number equal 0
	if(nb == 0){
		buffer[0]='0';
		write(1, buffer,1);
		return;
	}

	// Number is negative
	if (nb < 0){
		is_negative=1;
		nb = -nb; //became positive
	}

	// Write reverse to buffer
	while(nb>0){
		buffer[index++]='0'+ (nb %10);// ones digit -overload-
		nb /= 10;// Shift the numbers to tens place
	}

	if(is_negative){
		buffer[index++]='-';
	}

	//Print index begin at end of buffer
	while(index > 0){
		write(1,&buffer[--index],1);
	}
}
