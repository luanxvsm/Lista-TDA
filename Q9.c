#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[200];

    printf("Digite o seu nome completo: ");
    gets(nome);
    printf("Seu nome: %s\n", nome);
    
    for(int i = 0 ; nome[i] != '\0'; i++){
        printf("%c ",nome[i]);
    }
    
    printf("\n");
    
    for(int i = strlen(nome) ; i >= 0; i--){
        printf("%c ",nome[i]);
    }
    
    printf("\n");
    
    for(int i = 0 ; nome[i] != '\0'; i++){
        printf("%c",toupper(nome[i]));
    }
        
    printf("\n");
    
    for(int i = 0 ; nome[i] != '\0'; i++){
        printf("%c",tolower(nome[i]));
    }
    
    printf("\n");
    
    for(int i = 0 ; nome[i] != '\0'; i++){
        if(nome[i]==' '){
            printf("\n");
            i++;
    }
    	printf("%c\n",nome[i]);
	}
	
	for(int i = strlen(nome)-1 ; i >= 0; i--){
        if(nome[i]==' '){
            printf("\n");
            i--;
    }
        printf("%c",nome[i]);
    }
}