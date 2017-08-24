#include <stdio.h>

main()
{
    int c;
    while (1) //ctrl + D is EOF in linux
    {
	c = getchar();
	int t = getchar();
	printf("The value of c!= EOF: %d\n", c != EOF);
	if(c != EOF)
	{
	    putchar(c);
	    printf("\n");
	}
	else
	{
	    break;
	}
	
    }
}
