/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:17:58 by gagir             #+#    #+#             */
/*   Updated: 2023/07/15 18:18:33 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		cursor_begin;
	int		cursor_last;

	cursor_last = size - 1;
	cursor_begin = 0;
	while (cursor_begin < cursor_last)
	{
		temp = tab[cursor_last];
		tab[cursor_last] = tab[cursor_begin];
		tab[cursor_begin] = temp;
		cursor_last --;
		cursor_begin ++;
	}
}
