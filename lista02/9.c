/*
 * Lista 02 - Questão 9
 */

#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int y)
{
	if(y==1)
		return x;
	else
		return x*potencia(x,y-1);
}

int main(void) {

	int x,y;

	scanf("%d %d",&x,&y);
	printf("%d\n",potencia(x,y));

	return 0;
}
