/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:27:59 by mjameau           #+#    #+#             */
/*   Updated: 2024/05/13 18:38:49 by mjameau          ###   ########.fr       */
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
