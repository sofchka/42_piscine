/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:25:28 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/17 16:55:38 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swaper(char **alo, char **vaxo)
{
	char	*swap;

	swap = *alo;
	*alo = *vaxo;
	*vaxo = swap;
}

void	print(char **vaxo, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (vaxo[i][j])
		{
			write(1, &vaxo[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	if (argc < 2)
		return (0);
	k = 1;
	while (k < argc - 1)
	{
		j = 1;
		while (j < argc - k)
		{
			i = 0;
			while (argv[j][i] && argv[j + 1][i]
				&& argv[j][i] == argv[j + 1][i])
				i++;
			if (argv[j][i] > argv[j + 1][i])
				swaper(&argv[j], &argv[j +1]);
			j++;
		}
		k++;
	}
	print(argv, argc);
	return (0);
}
