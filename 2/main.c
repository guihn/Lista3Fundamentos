#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
Uma empresa deseja calcular a depreciação de seus bens. Desenvolva um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o
perı́odo em anos. Utilize os seguintes cálculos:
• valor depreciado = valor do bem * (taxa de depreciação / 100)
• valor do bem depreciado = valor do bem – valor depreciado
Considere que a taxa de depreciação tem valor fixo de 1.5%.
*/

int main(){
	char repetir='S';
	float valor, dep=0.0f;
	const float taxa=1.5f;
	int periodo;
	do{
		printf("Informe o valor do bem a ser depreciado:");
		scanf("%f",&valor);
		printf("Informe o periodo da depreciacao:");
		scanf("%d",&periodo);

		printf("Ano   Valor do bem   Depreciacao   Valor Depreciado\n");
		printf("================================================\n");
		for(int i=1; i<=periodo; i++){
			printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, valor, (valor*(taxa/100)), valor-(valor*(taxa/100)));
			dep+=(valor*(taxa/100));
			valor=valor-(valor*(taxa/100));
		}
		printf("================================================\n");
		printf("Depreciacao acumulada: R$%.2f\n",dep);
		
		printf("Deseja repetir o programa?");
		scanf(" %c", &repetir);
	}while(toupper(repetir)=='S');
	return 0;
}
