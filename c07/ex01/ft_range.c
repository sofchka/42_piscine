/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:46:05 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/25 19:14:17 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*result;

	if (min >= max)
		return (NULL);
	len = max - min;
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	len = 0;
	while (len < (max - min))
	{
		result[len] = min + len;
		++len;
	}
	return (result);
}
