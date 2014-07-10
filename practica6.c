#include<stdio.h>
int main(){
        int a=5,i,j,temp;
        for(i=a;i>0;i--){
		if(i==a){
			for(j=i;j>0;j--){
			printf("*");
			}
		}else{
			temp=a-i;
			for(j=temp;j>0;j--){
				printf(" ");
			}
	                for(j=i;j>0;j--){
	                        printf("*");
       		         }
		}
                printf("\n");
        }
}


