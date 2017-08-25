#include <stdio.h>

main()
{
    int c;
    int lenofwords[100];
    int wordIndex = 0;
    for (int i = 0; i < 100; i++)
    {
        lenofwords[i] = 0;
    }
    
    while ((c = getchar()) != EOF && wordIndex < 100)
    {
    
        if (c == ' ' || c == '\n' || c == '\t')
        {
            wordIndex++;
        }
        else
        {
            lenofwords[wordIndex]++;
        }
    
        //if (c != ' ' || c != '\n'  || c != '\t')
        //{
        //    lenofwords[wordIndex]++;
        //}
        //else if (c == ' ')
        //{
        //    wordIndex++;
        //}
    }
    printf("wordIndex %d\n", wordIndex);
    printf("lenofwords[0] %d\n", lenofwords[0]);
    for (int i = 0; i <= wordIndex; i++)
    {
        for (int j = 0; j < lenofwords[i]; j++)
        {
            putchar('-');
        }
        putchar('\n');
    }

}
