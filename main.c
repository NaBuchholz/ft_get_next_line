/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:03:50 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/29 16:13:53 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./example.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	get_next_line(fd);
	return (0);
}
