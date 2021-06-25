#include <stdio.h>
#include <stdlib.h>

/*2.Crie um vetor de 20 posições com a seguinte
sequencia numérica 2,4,6,8,10,... 
Após o preenchimento imprima o vetor...*/

int main( ){ 
	
	int i;
	int vet[20];
	
	for(i = 0 ; i < 20 ; i++)
	{
		if(i == 0){
			vet[i] = 2 ;
		}
		else{
			vet[i] = (i+1) * 2;
		}
	}
	
	 for(i = 0 ; i < 20 ; i++) 
	 {
	 	printf("%d \n",vet[i]);
	 }


	system("pause");
	return 0;
}
