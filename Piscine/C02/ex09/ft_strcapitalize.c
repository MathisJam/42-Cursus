/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:46:15 by mjameau           #+#    #+#             */
/*   Updated: 2024/04/01 10:13:29 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		while (str[j])
		{
			if (str[j] >= 'A' && str[j] <= 'Z')
				str[j] += 32;
			j++;
		}
		if (str[i - 1] < 47 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
