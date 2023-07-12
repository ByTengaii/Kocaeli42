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
