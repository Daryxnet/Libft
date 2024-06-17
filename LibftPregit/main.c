#include "libft.h"
#include <stdio.h>

int	main()
{
	char	let;

	let = 'G';
	if (ft_isalpha(let))
		printf("es una letra\n");
	else if (ft_isdigit(let))
		printf("es un digito");
	else
	      printf("no es ni letra ni digito");
	return (0);
}
