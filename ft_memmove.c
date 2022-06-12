/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:33:33 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/20 17:41:46 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*source;
	char		*dest;

	dest = dst + (len - 1);
	source = src + (len - 1);
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
		while (len--)
			*dest-- = *source--;
	return (dst);
}
