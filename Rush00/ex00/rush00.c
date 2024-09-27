/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:04:15 by miyolchy          #+#    #+#             */
/*   Updated: 2024/09/11 18:16:02 by szakarya         ###   ########.fr       */
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
			else if ((xl > 1 && xl < x) && (yh == 1 || yh == y))
				ft_putchar('-');
			else if ((xl == 1 || xl == x) && (yh < y && yh > 1))
				ft_putchar('|');
			else
				ft_putchar('o');
			xl++;
		}
		ft_putchar('\n');
		yh++;
	}
}
