#include <stdio.h>

int main(){
	int dias[29], maior, menor, i, maiorDia=0; //Declarando variáveis
	
	//Criando o for de 0 até 28 para pedir a quantidade de vendas em cada dia
	for(i=0; i<28; i++){
		printf("No dia %d foi vendido quantas refeições? ", i+1);
		scanf("%d", &dias[i]);
		
		//Criando um if para achar em que dia foi vendido mais refeições 
		if(i == 0){
            menor = dias[0];
            maior = dias[0];
        }else if(maior<dias[i]){
            maior = dias[i];
            maiorDia = i;
        }
        if(menor > dias[i]){
            menor = dias[i];
        }
     }
     
    //Printando o dia que mais foi vendido e quantas foram vendidas nesse dia 
    printf("O dia que mais foi vendido foi o dia %d, onde foram vendidas %d refeições\n", (maiorDia+1), maior);

}