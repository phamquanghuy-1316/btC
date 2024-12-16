#include<stdio.h>
int main(){
	int s;
	for(int a=1; a<=9;a++){
	for (int i=1; i<=10; i++){
		printf("%d * %d = %d \n",a,i,s=a*i);
	}
		printf("\n");
	}
	return 0;
}
