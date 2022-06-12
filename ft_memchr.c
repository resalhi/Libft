/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:09:09 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/20 23:28:13 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char) c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
