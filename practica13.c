#include<stdio.h>
int fibonacci(int n){
	return n;
}
int fib(int a,int b,int num){
	if(num==0){
	 fibonacci(0);
	}
	else if(num==1){
		fibonacci(1);
	}
	else if(num==2)
		fibonacci(b);
	else{
	return fib(b,a+b,num-1);
	}
}
int main(){
int tam;
printf("numero:\n");
scanf("%d",&tam);
printf("Valor %d \n",fib(1,1,tam));
}
