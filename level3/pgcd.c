/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 19:42:44 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 19:46:46 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	pgcd(int nb1, int nb2)
{
	int div;
	int pgcd;

	div = 1;
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 && nb2 % div == 0)
			pgcd = div;
		div ++;
	}
	printf("%d", pgcd);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
