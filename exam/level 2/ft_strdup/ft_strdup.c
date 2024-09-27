#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *result;
	int len;

	len = 0;
	if (src == NULL)
		return(NULL);
	while (src[len])
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1))
	if (result == NULL)
		return (NULL);
	len = 0;
	while(src[len])
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result):
}
