/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:14:22 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/07 12:16:31 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	digits;

	digits = 48;
	while (digits < 58)
	{
		write (1, &digits, 1);
		digits++;
	}
}
