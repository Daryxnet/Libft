#include "libft.h"
#include <stdio.h>

int	main()
{
	char	let;

	let = 'G';
	if (ft_isalnum(let))
		printf("es un numero o un digito");
	else
		printf("no es ni letra ni digito");
	return (0);
}
