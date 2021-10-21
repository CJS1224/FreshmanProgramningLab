#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    int i = 2 ;
    while(scanf("%d", &n), n)
    {
        if(n == 1)
        {
            printf("not a prime\n") ;
            continue ;
        }
        for(i = 2 ; i < n && n % i != 0 ; i++) ;
        printf((i == n) ? "prime\n" : "not a prime\n" ) ;
    }
    return 0 ;
}
