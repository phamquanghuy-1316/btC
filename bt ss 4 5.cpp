#include <stdio.h>
int main(){
	int a,b,c,min,max;
	printf("nhap so thu nhat ");
	scanf("%d",&a);
	printf("nhap so thu hai ");
	scanf("%d",&b);
	printf("nhap so thu ba ");
	scanf("%d",&c);
	if(a>b){
		max=a;
		min=b;
	}else{
		max=b;
		min=a;
	}
	if(c>min && c<max){
		printf("%d nam trong khoang %d va %d", c,min,max);
	}else{
		printf("%d khong nam trong khoang %d va %d", c,min,max);
	}
	return 0;
}
