#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int contador = 0,i=-1;
	char entrada [255] ;
	fgets (entrada,255,stdin) ;

	while(entrada[++i]!='\0')
	{
		if(entrada[i]=='a' || entrada[i]=='e' || entrada[i]=='i' || entrada[i]=='o' || entrada[i]=='u')
			contador++;
	}

	printf("%d",contador);

	return 0;
}
