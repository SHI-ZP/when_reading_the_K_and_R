#include <stdio.h>

main()
{
    float fDelta = 20.0;
    float fCel = 0.0;
    float fUpperLimit = 100;
    printf("%10s %20s\n", "celsius", "fahrenheit");
    while (fCel <= fUpperLimit)
    {
        printf("%10.0f %20.1f\n", fCel, fCel * 1.8 + 32.0);
	fCel += fDelta;
    }
}
