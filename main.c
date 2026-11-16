#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("Hi123\n");
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		printf("Hi\n");
	}else{
		return 1;
	}
return 0;
}
