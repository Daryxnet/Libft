#include "libft.h"
#include <stdio.h>

//int	ft_isdigit(int c);

int	main()
{
	char	let;

	let = '5';
	if (ft_isalpha(let))
		printf("es una letra\n");
	if (ft_isdigit(let))
		printf("es un digito");
	else
	      printf("no es ni letra ni digito");
	return (0);
}
