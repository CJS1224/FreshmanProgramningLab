#include <stdio.h>

int main()
{
  	int x, y ;
  	scanf("%d %d", &x, &y) ;
  	(x % y == 0) ? (printf("%d is a multiple of %d.", x, y)) : (printf("%d is not a multiple of %d.", x, y)) ;
	return 0 ;
}
