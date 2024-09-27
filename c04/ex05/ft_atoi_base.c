/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:50:55 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/14 17:56:44 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j] || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == 32 || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_num_base(char sos, char *base)
{
	int	num;

	num = 0;
	while (base[num] && base[num] != sos)
		num++;
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		num;
	int		alo;

	i = 0;
	num = 0;
	j = 1;
	alo = ft_base_size(base);
	if (alo <= 1)
		return (0);
	while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] && (ft_num_base(str[i], base) < alo))
	{
		num = (alo * num) + (ft_num_base(str[i], base));
		i++;
	}
	return (num * j);
}
/*#include <stdio.h>
int main()
{
	int	n;

	n = ft_atoi_base("-101010", "01");//-12066
	printf("%d", n);
}*/
