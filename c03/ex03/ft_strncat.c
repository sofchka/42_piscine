/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:56:14 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/13 21:12:13 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int main(void)
{
	char string1[40] = "Hello ";
	char *string2 = "world";
	char *result;

	result = ft_strncat(string1, string2, 3);
	printf("%s", result);
	return (0);
}*/
