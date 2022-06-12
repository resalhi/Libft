/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:35 by ressalhi          #+#    #+#             */
/*   Updated: 2021/11/14 14:34:32 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	j;
	int	k;
	int	l;

	j = 1;
	k = 0;
	l = 0;
	while ((*str <= 13 && *str >= 9) || *str == ' ')
		str++;
	if (*str == '-')
		j *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		k = k * 10 + *str - 48;
		str++;
		l++;
	}
	if (l >= 19 && j > 0)
		return (-1);
	if (l >= 19 && j < 0)
		return (0);
	return (k * j);
}
