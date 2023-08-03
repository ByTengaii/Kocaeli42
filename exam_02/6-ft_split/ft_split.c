#include <stdlib.h>

int	count_word(char *str)
{
	int in_word = 1;
	int count = 0;
	while(*str)
	{
		if(*str == ' ' || *str == '\n' || *str == '\t')
			in_word = 1;
		else if(in_word)
		{
			count++;
			in_word = 0;
		}
		str++;
	}
	return (count);
}

char *get_next_word(char **str_ptr)
{
	char *start = *str_ptr;
	while(**str_ptr && !(**str_ptr == ' ' || **str_ptr == '\t' || **str_ptr == '\n'))
		(*str_ptr)++;
	int len = *str_ptr - start;
	char *word = (char*)malloc(len+1);
	if(word)
	{
		for(int i =  0; i < len; i++)
		{
			word[i] = start[i];
		}
		word[len] = '\0';
		return (word);
	}
	else
		return NULL;
}

char **ft_split(char *str)
{
	int words = count_word(str);

	char **arr = (char*)malloc(sizeof(char*) + (words+1));
	if(arr)
	{
		for (int i = 0 ; i < words ; i++)
		{
			while(*str == ' ' || *str == '\t' || *str == '\n')
				str++;
			arr[i] = get_next_word(&str);
			if(!arr[i])
			{
				for(int j =  0; j < i ; j++)
				{

				}
			}
		}
	}
	else
		return NULL;
}
