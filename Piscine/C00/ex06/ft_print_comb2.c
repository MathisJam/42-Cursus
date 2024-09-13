/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:33:58 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/15 10:43:53 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecris(int number, int second_number)
{
	char	d;
	char	u;
	char	dd;
	char	uu;

	d = (number / 10) + 48;
	u = (number % 10) + 48;
	dd = (second_number / 10) + 48;
	uu = (second_number % 10) + 48;
	write(1, &d, 1);
	write(1, &u, 1);
	write(1, " ", 1);
	write(1, &dd, 1);
	write(1, &uu, 1);
}

void	ft_print_comb2(void)
{
	int	number;
	int	second_number;

	number = 0;
	while (number <= 98)
	{
		second_number = number + 1;
		while (second_number <= 99)
		{
			ecris(number, second_number);
			if (!(number == 98))
				write(1, ", ", 2);
			second_number++;
		}
		number++;
	}
}
