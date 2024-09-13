/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:08:18 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/26 18:13:53 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb - 1;
	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (1 < i)
	{
		res = res * i;
		i--;
	}
	return (res);
}
