#include <stdio.h>

/*3.Crie um vetor de 20 posi��es com a seguinte sequencia num�rica
1,-1,1,-1,1,...
Ap�s o preenchimento imprima o vetor..*/

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
