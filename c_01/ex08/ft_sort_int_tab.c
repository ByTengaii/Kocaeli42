/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:21:19 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 18:23:24 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)
{
	int		temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		swapped;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		swapped = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
		{
			break ;
		}
		i++;
	}
}
