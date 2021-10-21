#include <stdio.h>

int main()
{
  	int x1, x2, x3, x4 ;
  	scanf("%d %d %d %d", &x1, &x2, &x3, &x4) ;
  	if((x3 <= x1 && x3 <= x2 && x4 <= x1 && x4 <= x2) || (x3 >= x1 && x3 >= x2 && x4 >= x1 && x4 >= x2)) printf("no overlay") ;
	else printf("overlay") ;
	return 0 ;
}
