#include "libft.h"
#include <stdio.h>
#include <aio.h>

int	main()
{
	/*int	i;

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
	return (0);*/
/*	int	*test;
	int	i;
	int	n;
	int	len;

	i = 0;
	n = 10;
	test = (int *)ft_calloc(n, sizeof(int));
	len = sizeof(test);
	printf("size de test: %i\n", len);
	while (i < n)
	{
		printf("pnt con calloc igual:%i\n", test[i]);
		i++;
	}
	free(test);*/
//Test de split
/*	char	*str;
	char	**narray;
	char	x;
	int		i;

	x = ' ';
	i = 0;
	str = "      Ho la Co mo Es tas   ";
	narray = ft_split(str, x);
	while (narray[i])
	{
		printf("strings resultantes: %s\n", narray[i]);
		i++;
	}
	free(narray);*/
//Test de itoa
	int		num;
	char	*newstr;

	num = 115;
	newstr = ft_itoa(num);
	printf("La str del numero %d es: %s\n", num, newstr);
	free(newstr);
	return 0;
}
