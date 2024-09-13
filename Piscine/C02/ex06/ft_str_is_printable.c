/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:41:34 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/17 20:55:23 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
