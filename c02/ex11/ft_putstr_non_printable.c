/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:44:28 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/10 20:38:29 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex_print(unsigned char c)
{
	const char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_hex_print((unsigned char)str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}*/
