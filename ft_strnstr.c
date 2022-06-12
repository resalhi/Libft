/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:04:43 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/14 01:38:58 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*haystack && len--)
	{
		i = 0;
		while (needle[i] == haystack[i] && i <= len)
		{
			if (needle[i + 1] == '\0')
				return ((char *) haystack);
			i++;
		}
		haystack++;
	}
	return (0);
}
