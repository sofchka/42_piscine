/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:38:19 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/16 16:41:01 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	sum;

	i = 2;
	sum = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			sum = sum * i;
			i++;
		}
	}
	return (sum);
}
