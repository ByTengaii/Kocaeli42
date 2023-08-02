/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:20:37 by gagir             #+#    #+#             */
/*   Updated: 2023/07/31 17:03:40 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] < 32 || base[i] > 126 || base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_sign(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	if (*sign % 2 == 1)
		return (i);
	return (i);
}

int	ft_value(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	j;
	int	res;
	int	len;

	sign = 1;
	res = 0;
	if (check_base(base) == 0)
		return (0);
	i = ft_atoi_sign(str, &sign);
	len = ft_strlen(base);
	while (str[i])
	{
		j = ft_value(str, base, i);
		if (j == -1)
			break ;
		else
			res = (res * len) + j;
		i++;
	}
	return (sign * res);
}
