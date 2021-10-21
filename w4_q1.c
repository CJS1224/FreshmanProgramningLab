#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    int sum = 0 ;
    while(scanf("%d", &n), n)
    {
        sum += n ;
    }
    printf("%d", sum) ;
    return 0 ;
}
