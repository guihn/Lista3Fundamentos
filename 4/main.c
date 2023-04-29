#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Apresentar os números primos entre dois valores, que representam os limites
inferior e superior, respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n
números por linha. n é informado pelo usuário.
Validar:
• n para que seja maior que 0.
• limite inferior maior que 1.
• limite superior maior ou igual ao limite inferior.
Implementar a repetição de programa.
Mostrar os resultados como no exemplo a seguir:
*/

int main(){
	char rep='s';
	int li=0, n=0, npl, match=0;
	do{
		printf("Informe o valor do limite inferior:");
		scanf(" %d", &li);
		printf("Informe o valor do limite superior:");
		scanf(" %d", &n);
		printf("Informe quantos numeros deseja imprimir por linha:");
		scanf("%d", &npl);

		for(int i=li, cont=0; i<=n; i++){
			for(int j=1; j<=i; j++){
				if(i%j==0) match++;
			}
			if(match == 2) printf("%d\t", i);
			if(cont==npl){
				cont=0;
				printf("\n");
			}
			if(match == 2)cont++;
			match=0;
		}
		printf("\n");
		
		printf("Deseja repetir o programa (S ou N)?");
		scanf(" %c", &rep);
	}while(rep=='S'||rep=='s');
	return 0;
}
