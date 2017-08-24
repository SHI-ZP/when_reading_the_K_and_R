#include <stdio.h>

main()
{
    float fFahr = 0.0;
    float fDelta = 20.0;
    float fUpperLimit = 300;
    printf("%10s %20s\n","fahrenheit", "celsius");
    while (fFahr <= fUpperLimit)
    {
	printf("%10.0f %20.1f\n", fFahr, (5.0/9.0) * (fFahr - 32.0));
	fFahr += fDelta;
    }
}
