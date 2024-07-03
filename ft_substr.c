/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:39:55 by dagarmil          #+#    #+#             */
/*   Updated: 2024/07/03 12:54:55 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	newlen;
	size_t	slen;

	newlen = ft_strlen(s + start);
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen < start)
		len = 0;
	if (newlen < len)
		len = newlen;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int	main()
{
	char	*str;
	char	*substr;

	str = "1234Hola";
	substr = ft_substr(str, 4, 9);
	printf("substr: %s\n", substr); 
	return 0;
}*/
