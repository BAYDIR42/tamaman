* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjouini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 10:59:52 by bjouini           #+#    #+#             */
/*   Updated: 2018/03/01 11:20:46 by bjouini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *begin;
	char *end;
	char tmp;

	begin = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (begin < end)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		end--;
		begin++;
	}
	return (str);
}
