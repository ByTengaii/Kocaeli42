#include <stdio.h>

void	create_square( int x, int y)
{
	for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1) {
				if ( i == 0 && (j == 0 || j == y-1)	)
				{
					printf("%c",'A');
				}
				else if ( i == x-1 && (j == 0 || j == y -1))
				{
					printf("%c", 'C');
				}
				else
				{
					printf("%c", 'B');
				}
            } else
			{
                printf("%c", ' ');
			}
        }
		printf("\n");
    }
}

int main()
{
	create_square(4,5);
    return 0;
}
