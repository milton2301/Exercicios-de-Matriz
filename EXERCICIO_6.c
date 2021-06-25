#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*6. Leia um valor do teclado e imprima a correspondente
quantidade de asteriscos. Ex. Se ler o numero 6 imprima ******..*/

int main(){
	
	int i, num;
	
	printf("Digite a quantidade de asteriscos que deseja ver: ");
	scanf("\n%d",&num);
	
	for(i = 0 ; i < num ; i++)
	printf("*");
	printf("\n");
	
	system("pause");
	return 0;
}
