/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:22:05 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/04/17 15:28:02 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	static char	*pos;
	size_t		len_s;

	len_s = count(s1) + 1;
	pos = (char *)malloc(sizeof(char) * len_s);
	if (!pos)
		return (0);
	pos = ft_memcpy(pos, s1, len_s);
	return (pos);
}
