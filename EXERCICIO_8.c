#include <stdio.h>
#include <stdlib.h>

/*8.Escrever m linhas com i asteriscos alinhadas pela esquerda, onde i corresponde ao n�mero da linha corrente
(algoritmo, c�digo). Exemplo: Para m=6 a sa�da do programa deve ser 
*
**
***
****
*****
******/

int main(){
	
	int i, j, x, y;
	
	printf("Digite a quantidade linhas:\n");
	scanf("%d",&x);
	
	for(i = 0 ; i <= x ; i++)
	{
		for(j = 0 ; j < y ; j++)
			printf("* ");
		y++;
	    printf("\n");
    }	
    
	system("pause");
	return 0;
}
