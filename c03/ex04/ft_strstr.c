/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:56:43 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/13 10:21:14 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size_of(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	len;

	len = size_of(to_find);
	i = 0;
	if (len == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(to_find, &str[i], len) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char *alo = "hellow world im Sofi!!";
	char *al = "Sa";
	char *result;

	result = ft_strstr(alo, al);
	if (result)
		printf("%s", result);
	else
		printf("Substring not found\n");
	return (0);
}*/
