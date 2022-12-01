//include stdio.h //Aqui ja observamos o primeiro erro, o certo seria digitar #include <stdio.h> para conseguir incluir corretamente a biblioteca
#include <stdio.h> //Corrigido

//int main() Mais um erro, falta abrir chaves após o parênteses para codar dentro
int main(){ //Corrigido
	int numero = 0; //Declarando uma variável inteira chamada numero que é igual a 0
	
	printf("Informe o valor de um número: "); //Pedindo pro usuário um número
	//scanf("%d", numero); Outro erro, falta colocar o "&" antes da variável para o sistema entender que está recebendo aquela variável
	scanf("%d", &numero); //Corrigido
	
	printf("O número informado foi %d", numero);
}

//Basicamente o programa pede ao usuário que digite um número e logo após digitado é printado na tela o exato número que foi dito pelo usuário