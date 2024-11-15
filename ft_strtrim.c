/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 06:33:47 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/11/08 06:33:48 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	start;
	int	j;

	start = 0;
	while (s1[start] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[start] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		start++;
	}
	return (start);
}

static int	ft_end(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (end - 1 > 0)
	{
		start = 0;
		while (set[start] != '\0')
		{
			if (s1[end] == set[start])
				break ;
			start++;
		}
		if (set[start] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		length;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	length = end - start + 1;
	ptr = malloc(length + 1);
	if (ptr == NULL)
		return (NULL);
	while (start <= end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
