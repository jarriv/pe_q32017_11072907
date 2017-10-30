#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	int m1[3][3],m2[3][3];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m2[i][j]=m1[j][i];
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}
