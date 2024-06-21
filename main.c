#include "libft.h"
#include <stdio.h>
#include <aio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if ((ft_strlen(av[i])) <= 3)
			printf("La str tiene 3 letras o menos\n");
		else
			printf("La str tiene mas de 3 letras");
		i++;
	}
	return (0);
}
