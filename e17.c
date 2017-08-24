#include <stdio.h>

main()
{
    int c;
    while (1) //ctrl + D is EOF in linux
    {
	if ((c = getchar()) == EOF)
	{	
	    printf("The value of EOF is: %d\n", c);
	    break;	
	}   
    }
}
