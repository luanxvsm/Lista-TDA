#include <stdio.h>

int main(void){
	int i = 99, j;
	int *p;
	
	p = &i;
	j = *p + 100;
	printf("i = %d, j = %d, *p = %d", i, j, *p);	
}