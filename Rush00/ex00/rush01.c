/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:17:39 by miyolchy          #+#    #+#             */
/*   Updated: 2024/09/07 15:45:30 by miyolchy         ###   ########.fr       */
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
				ft_putchar('\\');
			else if ((xl == 1 && yh == 1) || (yh == y && xl == x))
				ft_putchar('/');
			else
				ft_putchar('*');
			xl++;
		}
		ft_putchar('\n');
		yh++;
	}
}
