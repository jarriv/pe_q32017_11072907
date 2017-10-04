#include <stdio.h>
#include <stdlib.h>

int digitos(int n, int total)
{
	if(n<10)
		return total+1;

	return digitos(n/10,total+1);
}

int main(void) {
	int x;
	scanf("%d",&x);
	printf("Número de digitos de %d = %d",x,digitos(x,0));
	return EXIT_SUCCESS;
}
