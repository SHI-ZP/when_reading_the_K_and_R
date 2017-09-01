#include <stdio.h>
#define NUMOFCHARACTER 26

main()
{
    int c;
    int freqOfCharCaptial [NUMOFCHARACTER];
    int freqOfCharSmall [NUMOFCHARACTER];
    
    for (int i = 0; i < NUMOFCHARACTER; i++)
    {
        freqOfCharCaptial[i] = 0;
        freqOfCharSmall[i] = 0;
    }
    
    while ((c = getchar()) != EOF)
    {
        if (c > 'A' && c < 'Z')
        {
            freqOfCharCaptial[c-'A']++;
        }
        else if (c > 'a' && c < 'z')
        {
            freqOfCharSmall[c-'a']++;
        }
    }
    
    for (int i = 0; i < NUMOFCHARACTER; i++)
    {
        printf("%c: ", 'A' + i);
        for (int j = 0; j < freqOfCharCaptial[i]; j++)
        {
            putchar('+');
        }
        putchar('\n');
    }

    for (int i = 0; i < NUMOFCHARACTER; i++)
    {
        printf("%c: ", 'a' + i);
        for (int j = 0; j < freqOfCharSmall[i]; j++)
        {
            putchar('+');
        }
        putchar('\n');
    }
}
