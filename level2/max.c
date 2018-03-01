/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 10:53:37 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 10:56:22 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int max;
	unsigned int i;

	if (len == 0)
		return (0);
	max = tab[0];
	i = 0;
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return (max)
}
