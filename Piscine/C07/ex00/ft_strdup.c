/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:37:31 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/30 12:05:53 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = NULL;
	if (src == NULL)
		return (NULL);
	while (src[i])
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
