/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:06:22 by karisti-          #+#    #+#             */
/*   Updated: 2019/12/11 18:18:08 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
			return ((char*)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char*)&s[i]);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	s1 = malloc(sizeof(char) * (len + 1));
	if (s1)
	{
		i = 0;
		if (ft_strlen(s) > start)
			while (i < len)
			{
				s1[i] = s[start + i];
				i++;
			}
		s1[i] = '\0';
		return (s1);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_size;
	unsigned int	s2_size;
	unsigned int	i;
	unsigned int	j;
	char			*sj;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	sj = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (sj)
	{
		i = -1;
		while (++i < s1_size)
			sj[i] = s1[i];
		j = 0;
		while (j < s2_size)
			sj[i++] = s2[j++];
		sj[i] = '\0';
		return (sj);
	}
	return (NULL);
}
