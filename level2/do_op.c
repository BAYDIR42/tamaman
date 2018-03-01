/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 12:09:24 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 13:14:17 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putstring(char *nb1, char *nb2, char *nb3)
{
	int n1;
	int n2;
	int r;

	r = 0;
	n1 = atoi(nb1);
	n2 = atoi(nb3);
	if (nb2[0] == '+')
		r = n1 + n2;
	else if (nb2[0] == '-')
		r = n1 - n2;
	else if (nb2[0] == '*')
		r = n1 * n2;
	else if (nb2[0] == '/')
		r = n1 / n2;
	else if (nb2[0] == '%')
		r = n1 % n2;
	printf("%d", r);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_putstring(av[1], av[2], av[3]);
	return (0);
}
