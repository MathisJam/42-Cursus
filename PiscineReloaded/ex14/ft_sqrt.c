/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:24 by mjameau           #+#    #+#             */
/*   Updated: 2024/05/14 15:10:29 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (i > 46342)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
