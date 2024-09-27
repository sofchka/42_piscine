/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:54:58 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/13 21:11:27 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s2[i] == s1[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int main(void) {
	char *string1 = "Helllll";
	char *string2 = "Helllla";

// Comparing
	int result1 = ft_strncmp(string1, string2, 6);
	if (result1 == 0) {
		printf("'%s' and '%s' are equal\n", string1, string2);
	}
	else if (result1 < 0) {
		printf("'%s' is poqr '%s'\n", string1, string2);
	}
	else {
		printf("'%s' is mec '%s'\n", string1, string2);
	}
    return 0;
}*/
