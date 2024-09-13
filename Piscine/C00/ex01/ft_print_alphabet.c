/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:30:37 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/15 09:42:17 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write (1, &letter, 1);
		letter ++;
	}
}
