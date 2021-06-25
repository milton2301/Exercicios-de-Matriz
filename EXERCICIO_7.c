#include <stdio.h>
#include <stdlib.h>

/*7. Leia dois números no teclado, X e y. Imprima a quantidade de asteriscos de acordo com os valores de X e Y, ex. Se ler 5 e 4, imprime: 
*****
*****
*****
*****..*/

int main(){
	
	int j, i, x, y;
	
	printf("Digite o numero de linhas: ");
    scanf("%d",&x);
    printf("Digite o numero de colunas: ");
    scanf("%d",&y);

    for(i = 0 ; i < x ; i++) //linhas
	{
		for(j = 0 ; j < y ; j++ ) //Colunas
			printf("* ");
		printf("\n");
    }
		
 system("pause");	
	return 0;
}
