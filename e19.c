#include <stdio.h>

main()
{
    int c;
    int numofblank = 0;
    for (c = getchar() ; c != EOF ; c = getchar())
    {
        if (c != ' ')
        {
            putchar(c);
            numofblank = 0;
        }
        else
        {
            if (numofblank++ == 0)
            {
                putchar(' ');
            }
        }
    }
}
//https://stackoverflow.com/questions/3305735/kr-exercise-1-9-c
//int c;
//while ((c = getchar()) != EOF) {
//    if (c == ' ') {
//        while ((c = getchar()) == ' ');
//        putchar(' ');
//        if (c == EOF) break;
//    }
//    putchar(c);
//}
