/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:40:27 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/17 09:09:40 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	acopy;
	int	bcopy;

	acopy = *a;
	bcopy = *b;
	*a = acopy / bcopy;
	*b = acopy % bcopy;
}
