/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 19:51:04 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 19:55:33 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str);

void	print_hex(int p)
{
	char *str;

	str = 0123456789abcdef;
	if (p == 0)
		ft_putchar('0');
	while (p)
	{
		ft_putchar(str[p % 16]);
		p /= 16;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}
