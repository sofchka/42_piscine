/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:47:12 by miyolchy          #+#    #+#             */
/*   Updated: 2024/09/07 16:47:43 by miyolchy         ###   ########.fr       */
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
			else if ((x != 1 && xl == x && yh == 1)
				|| (y != 1 && yh == y && xl == 1))
				ft_putchar('C');
			else if ((xl == 1 && yh == 1) || (yh == y && xl == x))
				ft_putchar('A');
			else
				ft_putchar('B');
			xl++;
		}
		ft_putchar('\n');
		yh++;
	}
}
