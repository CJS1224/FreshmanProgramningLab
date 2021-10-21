#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    while(scanf("%d", &n), n)
    {
        printf("%d = ", n) ;
        for(int i = 2 ; i <= n ; i++)
        {
            while(n != i)
            {
                if(!(n % i))
                {
                    printf("%d * ", i) ;
                    n /= i ;
                }
                else break ;
            }
        }
        printf("%d\n", n) ;
    }
    return 0 ;
}
