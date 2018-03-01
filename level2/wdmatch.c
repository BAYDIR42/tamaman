/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:08:55 by bjouini           #+#    #+#             */
/*   Updated: 2018/02/28 10:29:40 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static char	*wdmatch(char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (s1);
	return (NULL);
}

int			main(int argc, char **argv)
{
	char *tmp;

	if (argc == 3)
	{
		tmp = wdmatch(argv[1], argv[2]);
		if (tmp != NULL)
			write(1, argv[1], tmp - argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
