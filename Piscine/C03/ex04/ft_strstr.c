/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:26:02 by mjameau           #+#    #+#             */
/*   Updated: 2024/03/19 18:29:34 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char*to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] != '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (to_find[n] == str[n + i] || to_find[n] == '\0')
		{
			if (to_find[n] == '\0')
			{
				return (str + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
