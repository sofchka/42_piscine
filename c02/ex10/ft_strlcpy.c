/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:28:09 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/10 20:30:44 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[len])
		len++;
	return (len);
}
/*
#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[6]; // Size is 6 to test the boundary

    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));
    printf("Source Length: %u\n", length);
    printf("Destination String: '%s'\n", dest);

    return 0;
}*/
