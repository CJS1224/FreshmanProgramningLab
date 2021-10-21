#include <stdio.h>
#include <stdlib.h>

int main()
{
    double N ;
    scanf("%lf", &N) ;
    double a = 0 ;
    double b = N ;
    double c = (a + b) / 2 ;
    for(int i = 0 ; i < 24 ; i++)
    {
        (c * c > N) ? (b = c) : (a = c) ;
        c = (a + b) / 2 ;
    }
    printf("%.4lf", c) ;
    return 0 ;
}
