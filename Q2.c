#include <stdio.h>
#include <locale.h>
#define TamanhoArry 10
int count(int valor[],int x){
    int soma=0;
    for(int i=0; i<10; i++){
        if (valor[i] == x){
            soma++;
        }
    }
return soma;
}

int main(void){
	int valor[10], i, quantidade3, num, quantidadeNum, maior, menor; //Declarando Variáveis
	
	//Entrada: Criando um laço de repetição para pedir 10 valores ao usuário
	for(i=0; i<10; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &valor[i]);
		
		//Criando um if para achar o maior e o menor valor do vetor
		if(i == 0){
            menor = valor[0];
            maior = valor[0];
        }else if(maior<valor[i]){
            maior = valor[i];
        }
        if(menor > valor[i]){
            menor = valor[i];
        }
     }
	
	//Usando o método count para contar quantas vezes o número 3 aparece no vetor
	quantidade3 =  count(valor, 3);
	printf("O número 3 se repete %d vezes nesse vetor\n", quantidade3); 
	
	//Pedindo ao usuário qual número ele quer pesquisar e depois usando count para saber quantas vezes esse número aparece
	printf("Digite o número que você quer pesquisar dentro do vetor: ");
	scanf("%d", &num);
	quantidadeNum = count(valor, num);
	printf("O número %d se repete %d vezes nesse vetor\n", num, quantidadeNum);
	
	//Printando o maior e o menor número
	printf("O maior número dentro desse vetor é: %d\n", maior);
	printf("O menor número dentro desse vetor é: %d", menor);	 		
}