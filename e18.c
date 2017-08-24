#include <stdio.h>

main()
{
    int c;
    int numBlank = 0;
    int numTab = 0;
    int numNewline = 0;
    
    for (c = getchar() ;c != EOF; c = getchar())
    {
        if (c == ' ')
        {
            ++numBlank;
            continue;
        }
        else if (c == '\t')
        {
            ++numTab;
            continue;
        }
        else if (c == '\n')
        {
            ++numNewline;
            continue;
        }
        else if (c == 10)
        {
            printf("The number of blanks: %d, tabs: %d, newlines: %d\n", numBlank, numTab, numNewline);
        }
    }
}
