#include <stdlib.h>

void rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
	else
		rush(20,20);
	return(0);
}