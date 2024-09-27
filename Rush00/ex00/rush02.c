/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:48:39 by miyolchy          #+#    #+#             */
/*   Updated: 2024/09/07 15:55:49 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xl;
	int	yh;

	yh = 1;
	if (x < 1 || y < 1)
		return ;
	while (yh <= y)
	{
		xl = 1;
		while (xl <= x)
		{
			if ((xl > 1 && xl < x) && (yh > 1 && yh < y))
				ft_putchar(' ');
			else if (yh == 1 && (xl == x || xl == 1))
				ft_putchar('A');
			else if (yh == y && (xl == x || xl == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			xl++;
		}
		ft_putchar('\n');
		yh++;
	}
}
