/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:49:24 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/14 19:43:05 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
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

void	ft_num_base(unsigned int nbr, char *base, int size)
{
	char	help;

	if (nbr >= (unsigned int)size)
		ft_num_base(nbr / size, base, size);
	help = base[nbr % size];
	write(1, &help, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_base(base) == 1)
	{
		while (base[i])
			i++;
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_num_base((unsigned int)(-nbr), base, i);
		}
		else
			ft_num_base((unsigned int)nbr, base, i);
	}
}
/*
int main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01234+6789");
	return (0);
}*/
