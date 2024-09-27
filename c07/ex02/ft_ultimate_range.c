/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:06:37 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/25 19:13:45 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	len = 0;
	*range = result;
	while (len < (max - min))
	{
		result[len] = min + len;
		++len;
	}
	return (len);
}
