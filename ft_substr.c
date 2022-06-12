/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:54:00 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/19 20:50:48 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (s == 0)
		return (0);
	slen = ft_strlen((char *)s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start >= len)
		str = (char *)malloc(len + 1);
	else
		str = (char *)malloc(slen - start + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}
