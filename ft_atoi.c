/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:31:24 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/28 00:30:50 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_positive(char str, int sign)
{
	if (str == '+' || str == '-')
	{
		if (str == '-')
			sign = sign * (-1);
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	sign = ft_is_positive(str[i], sign);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * 10 + (str[i] - 48) >= 9223372036854775807)
		{
			if (sign < 0)
				return (0);
			return (-1);
		}
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
