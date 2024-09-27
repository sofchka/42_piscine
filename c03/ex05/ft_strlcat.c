/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:58:04 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/13 21:14:37 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i >= size)
		return (j + size);
	while (src[k] && (i + k < size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*#include <stdio.h>

int main(void)
{
	char string1[18] = "Hello ";
	char *string2 = "world";
	unsigned int result;

	result = ft_strlcat(string1, string2, (unsigned int)sizeof(string1));
	printf("%d", result);
	return (0);
}*/
