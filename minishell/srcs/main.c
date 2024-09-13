/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:29:04 by mjameau           #+#    #+#             */
/*   Updated: 2024/09/13 15:51:08 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	main(void)
{
	char	*rl;
	char	**tokens;

	isatty(1);
	while (1)
	{
		rl = readline("minishell > ");
		tokens = ft_split(rl, ' ');
		add_history(rl);
		rl_on_new_line();
	}
	printf("%s\n", rl);
	return (0);
}
