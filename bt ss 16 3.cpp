#include <stdio.h>

void sum(int *a, int *b,int *sum){
	*sum = *a+*b;
}

int main(){
	int a=3,b=5,result;
	sum(&a,&b,&result);
	printf("%d",result);
	return 0;
}
