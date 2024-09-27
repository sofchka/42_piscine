/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:00:32 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/08 20:19:00 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	alo;

	i = 0;
	while (i < size - 1)
	{
		k = 0;
		while (size - k - 1 > i)
		{
			if (tab[size - k - 1] < tab[i])
			{
				alo = tab[size - k - 1];
				tab[size - k - 1] = tab[i];
				tab[i] = alo;
			}
			k++;
		}
		i++;
	}
}
