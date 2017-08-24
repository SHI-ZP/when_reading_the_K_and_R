#include <stdio.h>
//cc -std=c99
main()
{
    printf("%10s %20s\n","fahrenheit", "celsius");
    for(float fFahr = 300; fFahr >= 0; fFahr-=20.0)
    {
        printf("%10.0f %20.1f\n", fFahr, (5.0/9.0) * (fFahr - 32.0));
    }
}
