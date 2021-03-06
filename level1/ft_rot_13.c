/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 22:16:31 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 05:50:49 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') ||
				(str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
