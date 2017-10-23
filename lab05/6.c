#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x = 1;
	x ++;
	int * y = & x ;
	* y = * y + 1;
	printf ("%d\n",x );

	return 0;
}
