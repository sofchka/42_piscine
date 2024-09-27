/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:27:10 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/10 20:15:14 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	upper(char alo)
{
	if (alo <= 122 && alo >= 97)
		alo = alo - 32;
	return (alo);
}

char	lower(char alo)
{
	if (alo <= 90 && alo >= 65)
		alo = alo + 32;
	return (alo);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;
	char	c;

	i = 0;
	word = 0;
	while (str[i])
	{
		c = str[i];
		if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		{
			if (word == 0)
			{
				str[i] = upper(str[i]);
				word = 1;
			}
			else
				str[i] = lower(str[i]);
		}
		else
			word = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{
    char str[] = "heLLo _wORld! thIs \naIs a tEsT.";
    printf("Before: %s\n", str);
    ft_strcapitalize(str);
    printf("After: %s\n", str);
    return 0;
}*/
