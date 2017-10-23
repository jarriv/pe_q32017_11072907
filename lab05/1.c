#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main(void) {
	int x,y;
	scanf("%d %d",&x,&y);
	troca(&x,&y);
	printf("%d %d",x,y);
}
