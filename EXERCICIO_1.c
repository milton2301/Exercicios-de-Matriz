#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int imprimeResultado(float valores[5]){
	system("cls");
	printf("O resultado �: ");
	int i;
	for( i=0;i<5;i++){
		printf("%.f - ",valores[i]);
	}
	return 0;
}


int main(){
	
	setlocale(LC_ALL,"portuguese");
	int i;
  
	float vetor1[5];
	float vetor2[5];
	float resultado[5];
	int opcao;
	
	printf("OL�!");
	for( i=0;i<10;i++){
		if(i<5){
			printf("\nPor gentileza digite o %d� n�mero do primeiro vetor: ",i+1);
			scanf("%f",&vetor1[i]);		
		}
		else{
			printf("\nPor gentileza digite o %d� n�mero do segundo vetor: ",i-4);
			scanf("%f",&vetor2[i-5]);
		}
	}
	a:
	printf("\n\nPor gentileza escolha uma op��o:");
	printf("\n1-soma\n2-subtra��o\n3-multiplica��o\n4-divis�o\nop��o: ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			for(i=0;i<5;i++){
				resultado[i]=vetor1[i]+vetor2[i];
			}
			imprimeResultado(resultado);
			break;
		case 2:
			for(i=0;i<5;i++){
				resultado[i]=vetor1[i]-vetor2[i];
			}
			imprimeResultado(resultado);
			break;
		case 3:
			for(i=0;i<5;i++){
				resultado[i]=vetor1[i]*vetor2[i];
			}
			imprimeResultado(resultado);
			break;
		case 4:
			for(i=0;i<5;i++){
				resultado[i]=vetor1[i]/vetor2[i];
			}
			imprimeResultado(resultado);
			break;
		default:			
			printf("\nOp��o inv�lida\n\n");
			goto a;
	}	
	
	system("pause");
}
