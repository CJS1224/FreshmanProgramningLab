#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c ;
    scanf("%d %d %d", &a, &b, &c) ;
    if(a + b > c && a + c > b && b + c > a)
    {
        if(a * a + b * b > c * c) printf("acute triangle") ;
        else if(a * a + b * b == c * c) printf("right triangle") ;
        else printf("obtuse triangle") ;
    }
    else printf("can not construct") ;
    return 0 ;
}
