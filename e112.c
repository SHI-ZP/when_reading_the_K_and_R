#include <stdio.h>

main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            putchar('\n');
            while(c = getchar())
            {
                if (c == ' ' || c == '\t')
                {
                    continue;
                    //printf("15");
                    //putchar(c);
                    //break;
                }
                else
                {
                    //printf("21");
                    putchar(c);
                    break;
                }
            }
        }
        else
        {
            putchar(c);
        }
    }

}
