/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:03:59 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 17:29:59 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUFF_SIZE 4096

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ret);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
