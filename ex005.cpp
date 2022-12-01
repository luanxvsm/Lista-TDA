#include <stdio.h>
#include <cstdlib>

void funcaoA(int ** pt_ptL, int * ptLista, int Lista){
	printf("%d %d %d\n", pt_ptL, ptLista, Lista);
}

int main(){
	int lst;
	
	int * pl = (int *) malloc (sizeof(int));
	
	lst = *pl;
	
	funcaoA(&pl, pl, lst);
	
	printf("%p %p", &pl, &lst);
}