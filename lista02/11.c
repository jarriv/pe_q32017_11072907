#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int dec_bin(int n, int i)
{
	if(n/2<=1)
	{
		return (n%2)*pow(10,i) + (n/2)*pow(10,i+1);
	}
	return (n%2)*pow(10,i)+dec_bin(n/2,i+1);
}
 */

static int i = 0;

int dec_bin(int n)
{

	//int i=-1;
	//i++;

	if(n/2<=1)
	{
		return (n%2)*pow(10,i++) + (n/2)*pow(10,i);
	}
	return (n%2)*pow(10,i++)+dec_bin(n/2);
}

int bin_dec(int n)
{

	//int i=-1;
	//i++;

	if(n/10<=1)
	{
		return (n%10)*pow(2,i++) + (n/10)*pow(2,i);
	}
	return (n%10)*pow(2,i++)+bin_dec(n/10);
}

int main(void) {

	int n,opcao;

	scanf("%d %d",&n,&opcao);

	switch (opcao) {
	case 1:
		printf("%d\n",dec_bin(n));
		break;
	case 2:
		printf("%d\n",bin_dec(n));
		break;
	default:
		break;
	}

	//printf("%d\n\n",dec_bin(n));
	i = 0;


	return 0;
}
