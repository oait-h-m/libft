/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 03:30:41 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/31 03:30:43 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < size * count)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return ((void *)p);
}
