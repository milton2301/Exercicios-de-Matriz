#include <stdio.h>
#include <stdlib.h>

/*4.Crie um vetor de 20 posi��es com a seguinte sequencia num�rica
2,4,8,16,32,...
Ap�s o preenchimento imprima o vetor.*/

int main(){
	
	int i = 0;
	int vet[20];
	
	for(i = 0 ; i < 20 ; i++)
	{
		if(i == 0){
			vet[i] = 2 ;
		} else{
			vet[i] = vet[i-1] * 2;
		}
	}
	
	for(i = 0 ; i < 20 ; i++)
	{
		printf("%d \n",vet[i]);
	}
	
	system("pause");
	return 0;
}
