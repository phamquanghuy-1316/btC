#include<stdio.h>

void swap(int *a, int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;	
}

int main(){
	int a=3,b=6;
	int *aptr,*bptr;
	aptr=&a;
	bptr=&b;
	printf("gia tri cua bien a la %d\n",a);
	printf("gia tri cua bien b la %d\n",b);
	swap(aptr,bptr);
	printf("gia tri cua bien a la %d\n",a);
	printf("gia tri cua bien b la %d\n",b);
	return 0;
}
