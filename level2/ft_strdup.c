/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 09:48:07 by bjouini           #+#    #+#             */
/*   Updated: 2018/02/28 09:48:11 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int 	i;
	char	*tmp;

	i = 0;
	while (src[i])
		i++;
	tmp = (char*)malloc(sizeof(char) * (i + 1));
	while (i >= 0)
	{
		tmp[i] = src[i];
		i--;
	}
	return (tmp);
}
