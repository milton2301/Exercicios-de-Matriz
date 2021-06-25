#include <stdio.h>
#include <stdlib.h>

/*5.Crie um  vetor de 10 posições com a seguinte sequencia numérica
1,2,4,8,16,32,...
Um segundo vetor receber a subtração do segundo elemento com o primeiro, do terceiro com o primeiro, etc
Após o preenchimento imprima o vetor...*/

int main(){
	
	int i;
	int vet[10];
	int vet1[10];
	
	for(i = 0 ; i < 10 ; i++)
	{
		if(i == 0)
		{
			vet[i] = 1;
		}else{
			vet[i] = vet[i-1] * 2;
		}
	}
	
	for(i = 0 ; i < 10 ; i++)
	{
		vet1[i] = vet[i] - vet[0];
	}
	
	for(i = 1 ; i < 10 ; i++)
	{
		printf("%d\n",vet1[i]);
	}
	
	system("pause");
	return 0;
}
