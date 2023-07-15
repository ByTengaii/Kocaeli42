#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
			dest[counter] = src[counter];
			counter++;
			
	}
		dest[counter] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int    main()
{
    char src[] = "beautiful";
    char dest[] = "Win";
    printf("%s", ft_strcpy(dest, src));

}*/
