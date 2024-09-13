/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:44:40 by mjameau           #+#    #+#             */
/*   Updated: 2024/04/02 13:56:22 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

int	ft_countparts(char *charset, char *str)
{
	int	i;
	int	nbstr;

	i = 0;
	nbstr = 0;
	while (str[i] != '\0' && str[i] == *charset)
		i++;
	while (str[i] != '\0' && str[i])
	{
		if (str[i] != *charset && (str[i + 1] == *charset || str[i + 1] == '\0'))
			nbstr++;
		i++;
	}
	return (nbstr);
}

int	ft_countchar(char *charset, char *str)
{
	int	j;

	j = 0;
	while (str[j] && str[j] != *charset)
		j++;
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strsub;
	int		strcount;

	strsub = (char **)malloc(ft_countparts(str, charset) * (sizeof(char *)) + 1);
	if (strsub == NULL)
		return (NULL);
	strcount = 0;
	while (*str)
	{
		while (*str == *charset)
			str++;
		if (*str)
		{
			i = ft_countchar(str, charset);
			strsub[strcount] = malloc(sizeof(char) * i + 1);
			if (strsub == NULL)
				return (NULL);
			ft_strlcpy(strsub[strcount++], str, i +1);
			str += i;
		}
	}
	strsub[strcount] = NULL;
	return (strsub);
}
