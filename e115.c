#include <stdio.h>

int convert(int fahr)
{
    return 5 * (fahr - 32) / 9;
}

main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    while (fahr <= upper)
    {
        celsius = convert(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
