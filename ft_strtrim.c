/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:48:13 by dagarmil          #+#    #+#             */
/*   Updated: 2024/07/09 14:54:19 by dagarmil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end +1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*
int	main(int ac, char **av)
{
	char	*nstr;

	if (ac > 0)
	{
		nstr = ft_strtrim(av[1], av[2]);
		printf("Nueva str: %s\n", nstr);
	}
	free(nstr);
	return (0);
}*/
