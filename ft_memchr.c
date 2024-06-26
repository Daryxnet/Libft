/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:30:38 by dagarmil          #+#    #+#             */
/*   Updated: 2024/06/26 11:02:59 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	find;
	
	i = 0;
	str = (unsigned char *)s;
	find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == find)
			return (&str[i]);
		i++;
	}
	return (0);
}
