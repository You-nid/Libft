/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:13:10 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/04/12 17:17:05 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main()
{
	int	i;
	int n;
	t_list	*c;
	t_list	*g;

	c = (t_list *)malloc(sizeof(t_list));
	char	p[] = "HHHHHHHolwa Amigo";
	//char	c[] = "Hola Amigo";
	//char	*d1;
	//char	*d2;
	ft_lstadd_back(&c, g);
	c = ft_lstnew(p);
	while (c != NULL)
	{
		printf("%s ->", c->content);
	}
	printf("NULL\n");
	//printf("%s\n", d2);
	free(c);
	return (0);
}
