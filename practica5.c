#include<stdio.h>
int main(){
	int a=5,i,j;
	for(i=a;i>0;i--){
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
}
