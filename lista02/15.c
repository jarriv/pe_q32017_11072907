/*
 * Lista 2 - Questão 15
 */

#include <stdio.h>
#include <stdlib.h>

void Torre_Hanoi(int n, char inicio,char meio,char fim)
{
	if(n>0)
	{
		Torre_Hanoi(n-1,inicio,fim,meio);
		printf("%c-%c, ",inicio,fim);
		Torre_Hanoi(n-1,meio,inicio,fim);
	}
}

int main(void) {

	int x;
	scanf("%d",&x);
	Torre_Hanoi(x,'A','B','C');
	printf("\n");

	return 0;
}
