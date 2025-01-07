#include<stdio.h>
int main(){
	int a=3;
	int *aptr;
	aptr=&a;
	printf("gia tri cua bien a la %d\n",a);
	printf("vi tri cua bien a la %lu\n",&a);
	printf("gia tri cua bien a la %d\n",*aptr);
	printf("vi tri cua bien a la %lu\n",aptr);
	return 0;
}
