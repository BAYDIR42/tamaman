/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 19:33:44 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 19:38:08 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *ptr = NULL;
	int i = 1;
	int size = (end - start > 0) ? (end - start) : (start - end);
	if ((ptr = (int*)malloc(sizeof(int) * size)))
	{
		ptr[0] = end;
		while (i <= size)
		{
			ptr[i] = (end - start < 0) ? (ptr[0] + i) : (ptr[0] - 1);
			i++;
		}
	}
	return (ptr);
}
