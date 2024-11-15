/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:23:40 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/27 18:38:03 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;
	char	a;

	a = (char)c;
	ptr = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			ptr = (char *)&s[i];
		}
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	return (ptr);
}
