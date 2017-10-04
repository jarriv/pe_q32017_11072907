#include <stdio.h>
#include <stdlib.h>

int somatoria(int n)
{
	if(n==1)
		return 1;

	return n+somatoria(n-1);
}

int main(void) {
	int x;
	scanf("%d",&x);
	printf("Somatorio de 1 a %d = %d",x,somatoria(x));
	return EXIT_SUCCESS;
}
