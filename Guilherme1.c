#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
/*
O número 3.025 possui a seguinte caracterı́stica: 30 + 25 = 55 e 55^2 = 3025.
Escreva um programa que escreva todos os números com quatro algarismos que possuem a citada
caracterı́stica.
*/

int main(){
	char repetir='S';
	const int ini=1000, fin=9999;
	int sum=0;
	do{
	for(int i=ini; i<fin; i++){
		sum=((((i%10000)-(i%100))/100) + (i%100));
		if(pow(sum,2)==i) printf("%d\n",i);
	}
	printf("Deseja repetir o programa?");
	scanf(" %c", &repetir);
	}while(toupper(repetir)=='S');
	return 0;
}
