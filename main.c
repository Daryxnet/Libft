#include "libft.h"
#include <stdio.h>
#include <aio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		//if ((ft_strlen(av[i])) <= 3)
		//	printf("La str tiene 3 letras o menos\n");
		//else
		//	printf("La str tiene mas de 3 letras");
		ft_bzero(av[1], 5);
		printf("%s\n", av[1]);
		i++;
	}
	return (0);
}
