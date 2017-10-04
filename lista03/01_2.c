#include <stdio.h>
#include <stdlib.h>

int somatoria(int n, int total)
{
	if(n==0)
		return total;

	return somatoria(n-1,total+n);
}

int main(void) {
	int x;
	scanf("%d",&x);
	printf("Somatorio de 1 a %d = %d",x,somatoria(x,0));
	return EXIT_SUCCESS;
}
