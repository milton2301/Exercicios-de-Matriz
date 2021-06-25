#include <stdio.h>
#include <stdlib.h>

/*9.Escrever um programa que gere a tabuada de 1 a 10 (algoritmo, código). */

int main(){
	
	int i, j;
	
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 0 ; j <= 10 ; j++)
		{
			printf("| %d X %d = %d \n", i+1, j, (i+1)*j);
		}
	printf("_________________________\n");
	}
	
	system ("pause");
	return 0;
}
