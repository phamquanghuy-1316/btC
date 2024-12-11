#include<stdio.h>

int main (){
	int a,sum=0; 
	printf("nhap vao 1 so nguyen co 4 chu so");
	scanf("%d", &a);
	if(a<1000 || a>9999){
		printf("so nhap vao khong hop le");
	} else {
		while(a>0){
			sum+=a%10;
			a/=10;
		}
		printf("tong cac chu so trong so da nhap la %d", sum);
	}
	return 0; 
} 
