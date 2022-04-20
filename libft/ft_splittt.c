/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:27:10 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/04/18 18:02:06 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_str(char **str);

static size_t	size_sub(char const *str, char c)
{
	size_t	num;

	if (str == '\0')
		return (0);
	while (*str != '\0' && *str == c)
		str++;
	if (!*str)
		num = 0;
	else
		num = 1;
	while (*str != '\0')
	{
		if (*str == c && *(str + 1) != '\0' && *(str + 1) != c)
			num++;
		str++;
	}
	return (num);
}

char	**save(char **new, char const *s, char c)
{
	char	*sub;

	sub = (char *)s;
	while (*s != '\0')
	{
		if (*s == c)
		{
			if (sub != s)
				*(new++) = ft_substr(sub, 0, s - sub);
			sub = (char *)s + 1;
		}
		s++;
	}
	if (*sub != *s)
		*(new++) = ft_substr(sub, 0, s - sub);
	*new = NULL;
	return (new);
}

static char	**free_str(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**newstring;
	size_t	size;

	if (!s)
		return (NULL);
	size = size_sub(s, c);
	newstring = (char **)malloc((size + 1) * sizeof(char *));
	if (!newstring)
		return (NULL);
	newstring = save(newstring, s, c);
	if (!save(newstring, s, c))
		return (free_str(newstring));
	return (newstring);
}
