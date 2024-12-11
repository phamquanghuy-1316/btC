#include <stdio.h>
int main (){
	int a;
	printf("nhap vao mot so nguyen ");
	scanf("%d", &a);
	if(a%3==0 && a%5==0){
		printf("%d chia het cho ca 3 va 5 ", a);
	} else {
		printf("%d khong chia het cho ca 3 va 5", a);
	}
	return 0;
}
