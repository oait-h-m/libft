/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:15:46 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/29 01:40:30 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dd;
	const unsigned char	*ss;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	dd = (unsigned char *)dst;
	ss = (const unsigned char *)src;
	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dst);
}
