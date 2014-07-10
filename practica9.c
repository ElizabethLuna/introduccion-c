#include <stdio.h>
int main(){
	int edad;
	printf("Escribe tu edad:\n");
	scanf("%d",&edad);
	if(edad>=18){
		printf("Puedes votar\n");
	}
	else{
		printf("No puedes votar \n");
	}
}
