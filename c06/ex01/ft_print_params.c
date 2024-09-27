/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:24:30 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/16 21:24:46 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	c;
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c = argv[j][i];
			write(1, &c, 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}
