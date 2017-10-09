#include <stdio.h>
#include <stdlib.h>

int soma_digitos(int n)
{
	if(n<10)
		return n%10;

	return (n%10)+soma_digitos(n/10);
}

int main(void) {
	int x;
	scanf("%d",&x);
	printf("Soma digitos de %d = %d",x,soma_digitos(x));
	return EXIT_SUCCESS;
}
