/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:51:41 by szakarya          #+#    #+#             */
/*   Updated: 2024/09/25 19:13:18 by szakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len += j;
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	len += j * (size - 1);
	return (len + 1);
}

void	ft_fill(int size, char *arr, char **strs, char *sep)
{
	int		sos;
	int		i;
	int		j;

	i = 0;
	sos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			arr[sos] = strs[i][j++];
			sos++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			arr[sos] = sep[j++];
			sos++;
		}
		i++;
	}
	arr[sos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		nb;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		if (!arr)
			return (0);
		arr[0] = '\0';
		return (arr);
	}
	nb = ft_strlen(size, strs, sep);
	arr = (char *)malloc(nb * sizeof(char));
	if (!arr)
		return (0);
	ft_fill(size, arr, strs, sep);
	return (arr);
}
