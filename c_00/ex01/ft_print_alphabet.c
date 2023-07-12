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
