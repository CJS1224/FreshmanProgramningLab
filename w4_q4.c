#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j < n - i ; j++) printf(" ") ;
        for(int k = 1 ; k <= i ; k++) printf(k == i ? "*" : "* ") ;
        if(i != n) printf("\n") ;
    }
    return 0 ;
}
