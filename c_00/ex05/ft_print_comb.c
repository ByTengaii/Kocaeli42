#include <unistd.h>
void	ft_putchar(char a, char b, char c)
{
	char  comma = ',';
	char space =' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if( a == '7' && b == '8' && c == '9'){
	}else{
	write(1,&comma,1);
	write(1,&space,1);
	}
	// if a =7 then c need to be 10 and it's not sensive.
	// At the same time the others.
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}


int main (){
	ft_print_comb();
}
