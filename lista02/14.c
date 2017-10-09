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

static int i;

int digitos(int n)
{
	if(n<10)
		return 1;

	return 1+digitos(n/10);
}

int palindromo(int n)
{

	i = digitos(n);

	if(n/10<=1)
	{
		return (n%10)*pow(10,--i) + (n/10)*pow(10,--i);
	}
	return (n%10)*pow(10,--i)+palindromo(n/10);
}

int main(void) {

	int n;


	scanf("%d",&n);
	if(palindromo(n)==n)
		printf("sim\n");
	else
		printf("nao\n");


	return 0;
}
