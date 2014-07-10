#include<stdio.h>
int main(){
    int tam,i,j,temp,ancho,ast;
    printf("tamanio:\n");
    scanf("%d",&tam);
    temp=tam+tam-1;
    for(i=1;i<=tam;i++){
	ast=i+i-1;
        ancho=(temp-ast)/2;
        for(j=0;j<ancho;j++){
            printf(" ");
        }
        for(j=0;j<ast;j++){

            printf("*");
        }
        for (j=0; j < ancho; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
