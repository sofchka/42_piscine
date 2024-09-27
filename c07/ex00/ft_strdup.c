/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:18:35 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/25 19:14:41 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;

	len = 0;
	if (src == NULL)
		return (NULL);
	while (src[len])
		++len;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		result[len] = src[len];
		++len;
	}
	result[len] = '\0';
	return (result);
}
