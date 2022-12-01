#include <stdio.h>
#include <locale.h>

int main(){
	int tamanho;
	
	printf("*******QUADRADO 5X5*******\n");
	
	//Criando o for para repetir o X 5 vezes em linha
    for(int i=0; i<5; i++){
            printf("\n\t"); //Dando os devidos espaçamentos
        //Criando outro for para repetir o X 5 vezes em coluna
        for(int i = 0 ; i < 5; i++){
            printf("X "); //Printando o X que vai ser mostrado
        }
    }
    
    printf("\n\n"); //Pulando linhas
    
    printf("**************************\n\n"); //Dividindo a tela
    
    //Pedindo ao usuário qual o tamanho que ele deseja para o novo quadrado
    printf("Qual o tamanho do quadrado que você deseja que o sistema desenhe? ");
    scanf("%d", &tamanho);
    
    printf("\n*******QUADRADO %dX%d*******\n", tamanho, tamanho);

	//Criando um for igual ao primeiro quadrado so que dessa vez usando o tamanho que o usuário pediu
    for(int i=0 ; i<tamanho; i++){
            printf("\n\t");
        for(int i=0 ; i<tamanho; i++){
            printf("X ");
        }
    }
}