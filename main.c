/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:52:00 by jallen            #+#    #+#             */
/*   Updated: 2018/12/04 11:01:18 by jallen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ret;

	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) != 0)
		ft_putendl(line);
	close(fd);
}
