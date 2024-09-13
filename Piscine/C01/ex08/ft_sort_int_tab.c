/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:25:27 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/17 13:57:10 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	end_swap;
	int	i;

	end_swap = 0;
	while (end_swap == 0)
	{
		i = 0;
		end_swap = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				end_swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = end_swap;
				end_swap = 0;
			}
			i++;
		}
	}
}
