#include <stdio.h>

int main(){
	int num[4], multi, soma, i; //Declarando variáveis
	
	//Entrada: Criando um laço de repetição pedindo 4 números ao usuário
	for(i=0; i<4; i++){
		printf("Digite o %do número: ", i+1);
		scanf("%d", &num[i]);
	}
	
	//Processamento: Fazendo as operações pedidas no enunciado
	multi = num[0] * num[2];
	soma = num[1] + num[3];
	
	//Saída: printando o resultado das operações
	printf("A multiplicação entre o primeiro e o terceiro número é igual a: %d\n", multi);
	printf("A soma entre o segundo e o quarto número é igual a: %d\n", soma);	
}