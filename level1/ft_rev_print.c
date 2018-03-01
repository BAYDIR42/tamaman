/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 22:16:09 by bjouini           #+#    #+#             */
/*   Updated: 2018/02/28 04:52:06 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_rev(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		i--;
		ft_putchar(str[i]);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
