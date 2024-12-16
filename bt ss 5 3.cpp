#include<stdio.h>
int main(){
	int a,sum=0;
	printf("nhap vao 1 so nguyen ");
	scanf("%d", &a);
	for (int i=1; i<=a;i++){
		sum=sum+i;
	}
	printf("tong tu 1 den %d la %d",a,sum);
	return 0;
}
