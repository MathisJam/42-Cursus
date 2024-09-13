/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:58:02 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/30 12:07:29 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	i = 0;
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
