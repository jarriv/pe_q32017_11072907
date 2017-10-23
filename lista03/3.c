#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int v1[5],v2[5],v3[5];

	for(int i=0;i<5;i++)
	{
		scanf("%d",&v1[i]);
	}

	for(int i=0;i<5;i++)
	{
		scanf("%d",&v2[i]);
	}

	for(int i=0;i<5;i++)
	{
		v3[i]=v1[i]+v2[i];
		printf("%d ",v3[i]);
	}

	return 0;
}
