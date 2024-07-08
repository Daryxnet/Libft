/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:21:08 by dagarmil          #+#    #+#             */
/*   Updated: 2024/07/04 12:54:28 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
int	main()
{
	char	*str;
	char	*nstr;
	int		x;

	x = 'x';
	str = "HolaxComoxestas";
	nstr = ft_strchr(str, x);
	nstr++;
	printf("string resultante: %s\n", nstr);	
	return 0;
}*/
