/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:52:34 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/08 21:37:03 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*#include <stdio.h>
int main(void)
{
	int al;

	al = ft_strlen("aloalo");
	printf("%i", al);
	return (0);
}*/
