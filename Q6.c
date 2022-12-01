#include <stdio.h>

int main(){
	
	//Definindo Variáveis
	int a=0, b=0, c=0, branco=0, nulo=0, i=10;
	char votos[10];
	
	//Entrada: Mostrando ao usuario as opções de voto
	printf("-----ELEIÇÕES 2022-----\nPara votar no candidato A digite: a\nPara votar no candidato B digite: b\nPara votar no candidato C digite: c\nPara votar em Branco digite: Branco\nPara votar Nulo digite: nulo\n\n");
	
	//Processamento: Criando um laço de repetição para receber a votação
	for(int i=0; i<10; i++){
		printf("Digite seu voto: ");
		scanf("%c", &votos[i]);
		if(votos[i] == 'a'){
			a += 1;
			i += 1;
		}
		else if(votos[i] == 'b'){
			b += 1;
			i += 1;
		}
		else if(votos[i] == 'c'){
			c += 1;
			i += 1;
		}
		else if(votos[i] == 'Branco'){
			branco += 1;
			i += 1;
		}
		else{
			nulo += 1;
			i += 1;
		}
		
	}
	
	//Saída: Mostrando a quantidade de votos de cada um
	printf("\nQuantidades de votos no canditado A: %d", a);
	printf("\nQuantidades de votos no canditado B: %d", b);
	printf("\nQuantidades de votos no canditado C: %d", c);
	printf("\nQuantidades de votos em branco: %d", branco);
	printf("\nQuantidades de votos nulo: %d", nulo);
	
	
	return(0);
}
