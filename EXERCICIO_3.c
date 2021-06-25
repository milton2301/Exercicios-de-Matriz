#include <stdio.h>

/*3.Crie um vetor de 20 posições com a seguinte sequencia numérica
1,-1,1,-1,1,...
Após o preenchimento imprima o vetor..*/

int main(){
	
  int vet[20];
  int i = 0, m = -1;
  
  for(i = 0 ; i < 20 ; i++)
  {
  	vet[i] = m = m * (-1);
  }
  
  for(i = 0 ; i < 20 ; i++)
  {
  	printf("|%d|",vet[i]);
  }
	
	system("pause");
	return 0;
}
