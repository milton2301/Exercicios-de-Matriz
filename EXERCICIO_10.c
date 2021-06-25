#include <stdio.h>
#include <locale.h>
/* 10.Escreva um programa que gere uma matriz abaixo
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30*/

int  main () {	
	setlocale (LC_ALL, " português " );
	
	int i,j;
	int matriz [ 5 ] [ 6 ];
	int valor = 1 ;

	for(i = 0 ; i < 5 ; i ++) {		
		for(j = 0 ; j < 6 ; j ++) {
			matriz [i] [j] = valor;
			valor ++;
		}
	}
	for(i = 0 ; i < 5 ; i ++) {		
		for(j = 0 ; j < 6 ; j ++) {
			printf ("%3.d",matriz[i][j]);			
		}
		printf("\n");
	}
	system("pause");
	return  0 ;
}
