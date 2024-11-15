/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:16:05 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/28 18:16:08 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	i = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_len(src));
	size_src = ft_len(src);
	size_dst = ft_len(dst);
	if (dstsize <= size_dst)
		return (dstsize + size_src);
	while (i < (dstsize - size_dst - 1) && src[i] != '\0')
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_dst + size_src);
}
