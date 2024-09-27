/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:44:01 by miyolchy          #+#    #+#             */
/*   Updated: 2024/09/07 16:45:38 by miyolchy         ###   ########.fr       */
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
			else if (xl == 1 && (yh == y || yh == 1))
				ft_putchar('A');
			else if (xl == x && (yh == y || yh == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			xl++;
		}
		ft_putchar('\n');
		yh++;
	}
}
