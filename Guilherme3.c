#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Ler um número inteiro positivo (entre 1 e 9). Ler vários números inteiros
positivos. O primeiro número será utilizado para contar as ocorrências dele no segundo número. Valide
a entrada do primeiro número. Quando digitar um número negativo ou 0 (zero), solicite ao usuário se
ele deseja executar o programa novamente, se S (sim), execute-o, se N (não), encerre o programa.
*/

int main(){
	int num=0, comp=0, match=0;
	char rep='s';
	do{
		while(!((comp>=1) && (comp<=9))){
			printf("Informe um numero inteiro:");
			scanf("%d", &comp);
			if(!((comp>=1) && (comp<=9))) printf("Numero invalido! Deve ser positivo entre 1 e 9\n");
		}
		printf("Informe outro numero inteiro:");
		scanf("%d", &num);
		if(num>0){
			for(int i=1; i<=(int)(log10(num)+1); i++){
				if( (int)(((num%(int)pow(10,i))-(num%(int)pow(10,i-1)))/(int)pow(10,i-1))== comp) match++;
			}
			printf("%d possui %d digito(s) igual(is) a %d\n", num, match, comp);
			match=0;
		}else{
			comp=0, num=0, match=0;
			printf("Deseja repetir o programa (S ou N)?");
			scanf(" %c", &rep);
		}
	}while(rep=='S'||rep=='s');
	return 0;
}
