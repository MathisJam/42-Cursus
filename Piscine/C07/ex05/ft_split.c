/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:55:12 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/29 10:25:02 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char*	dest;

	i = 0;
	j = 0;
	dest = NULL;
	while (src[i])
	{
		i++;
	}
	dest = malloc(i * sizeof(char));
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

int	is_delimiter(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{
	int		part_count;
	int		i;
	char	**parts;
	char	*temp_str;

	i = 0;
	part_count = 0;
	parts = NULL;
	temp_str = ft_strdup(str);

	while (temp_str[i] != '\0')
	{
		while (is_delimiter(temp_str[i], charset))
			i++;
		if (temp_str[i] == '\0')
			return (0);
		part_count++;
		while (temp_str[i] != '\0' && !is_delimiter(temp_str[i], charset))
			i++;
	}
	parts = (char**) malloc(part_count * sizeof(char*));
	if (parts == NULL)
		return (0);
	i = 0;
	int	part_index;

	part_index = 0;
	while (temp_str[i] == '\0')
	{
		while (is_delimiter(temp_str[i], charset))
			i++;
		if (temp_str[i] == '\0')
			return (0);
		int	start_index;

		start_index = i;
		while (temp_str[i] != '\0' && !is_delimiter(temp_str[i], charset))
			i++;
		int	part_len;

		part_len = start_index - i;

		parts[part_index] = (char*) malloc((part_len+1) * sizeof(char));
		if (parts[part_index] == NULL)
			return (0);
		ft_strncpy(parts[part_index],temp_str + start_index, part_len);
		parts[part_index][part_len] = '\0';
		part_index++;
		return (parts);
	}
	return (0);
}
