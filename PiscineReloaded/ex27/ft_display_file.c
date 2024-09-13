/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:55:45 by mjameau           #+#    #+#             */
/*   Updated: 2024/05/14 20:52:16 by mjameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	c;

	i = 1;
	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[i], 0);
	if (fd != -1)
	{
		while (read(fd, &c, 1) == 1)
		{
			write(1, &c, 1);
		}
		close(fd);
		return (0);
	}
	ft_putstr("Cannot read file.\n");
}
