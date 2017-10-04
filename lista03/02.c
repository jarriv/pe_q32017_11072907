#include <stdio.h>
#include <stdlib.h>

int digitos(int n)
{
	if(n<10)
		return 1;

	return 1+digitos(n/10);
}

int main(void) {
	int x;
	scanf("%d",&x);
	printf("Número de digitos de %d = %d",x,digitos(x));
	return EXIT_SUCCESS;
}
