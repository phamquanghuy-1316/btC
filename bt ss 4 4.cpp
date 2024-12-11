#include <stdio.h>
int main (){
	int a;
	printf("nhap vao mot thang ");
	scanf("%d", &a);
	if(a == 2){
		printf("thang %d co 28 ngay", a);
	} else if(a%2 == 0) {
		printf("thang %d co 30 ngay", a);
	} else {
		printf("thang %d co 31 ngay", a);
	}
	return 0;
}
