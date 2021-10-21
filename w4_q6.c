#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[10] ;
    scanf("%s", &c) ;
    for(int i = 0 ; i < 10 ; i++)
    {
        switch(c[i])
        {
            case '0' : printf("----- ") ; break ;
            case '1' : printf(".---- ") ; break ;
            case '2' : printf("..--- ") ; break ;
            case '3' : printf("...-- ") ; break ;
            case '4' : printf("....- ") ; break ;
            case '5' : printf("..... ") ; break ;
            case '6' : printf("-.... ") ; break ;
            case '7' : printf("--... ") ; break ;
            case '8' : printf("---.. ") ; break ;
            case '9' : printf("----. ") ; break ;
        }
    }
    return 0 ;
}
