/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:54:39 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/13 10:14:36 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int main(void) {
	char *string1 = "Hello";
	char *string2 = "HellA";

// Comparing
	int result1 = ft_strcmp(string1, string2);
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
