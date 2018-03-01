/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 19:07:13 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 19:27:40 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;
	char	*arg;

	if (ac == 2)
	{
		i = -1;
		arg = av[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg != '\0')
				ft_putchar(' ');
			i = 0;
			while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != '\t')
				i++;
			ft_putchar(*arg);
			arg += i;
		}
	}
	ft_putchar('\n');
	return (0);
}
