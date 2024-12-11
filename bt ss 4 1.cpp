#include <stdio.h>
int main (){
	int a;
	printf("nhap vao mot so nguyen ");
	scanf("%d", &a);
	if(a>0){
		printf("%d la so nguyen duong", a);
	} else if(a<0){
		printf("%d la so nguyen am", a);
	} else {
		printf("%d khong la so nguyen am cung khong la so nguyen duong", a);
	}
	return 0;
}
