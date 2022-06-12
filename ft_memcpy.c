/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:09:00 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/19 21:02:44 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*sc;

	if (!dst && !src)
		return (0);
	sc = (char *) src;
	dest = (char *)dst;
	i = 0;
	while (n > 0)
	{
		dest[i] = sc[i];
		i++;
		n--;
	}
	return (dest);
}
