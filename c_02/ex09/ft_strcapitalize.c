/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:25:15 by gagir             #+#    #+#             */
/*   Updated: 2023/07/19 11:52:56 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') 
			&& capitalize_next) 
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			capitalize_next = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z'
				|| str[i] >= 'A' && str[i] <= 'Z') && !capitalize_next)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
