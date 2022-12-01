#include <stdio.h>

int main(){
	float precoAtual, vendaMedia, novoPreco1, novoPreco2, novoPreco3; //Declarando variáveis
	
	//Pedindo ao usuário os dados
	printf("Qual o preço atual do produto? ");
	scanf("%f", &precoAtual);
	printf("Qual a venda mensal desse produto? ");
	scanf("%f", &vendaMedia);
	
	//Criando ifs de acordo com a tabela para saber quanto de aumento ou diminuição o produto vai sofrer
	if(precoAtual < 30 && vendaMedia < 500){
		novoPreco1 = precoAtual + (precoAtual * 0.1);
		printf("O produto sofreu um aumento de 10 por cento e agora vale R$%.2f", novoPreco1);
	}else if(precoAtual < 80 && vendaMedia < 1200){
		novoPreco2 = precoAtual + (precoAtual * 0.15);
		printf("O produto sofreu um aumento de 15 por cento e agora vale R$%.2f", novoPreco2);
	}else{
		novoPreco3 = precoAtual - (precoAtual * 0.2);
		printf("O produto sofreu uma diminuição de 20 por cento e agora vale R$%.2f", novoPreco3);
	}
}