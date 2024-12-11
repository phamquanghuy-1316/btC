#include<stdio.h>

int main (){
	int a,s=0; 
	printf("nhap vao 1 so nguyen co 4 chu so ");
	scanf("%d", &a);
	if(a<1000 || a>9999){
		printf("so nhap vao khong hop le");
	} else {
		printf("so nghich dao la ");
		while(a>0){
		s=a%10;
		a/=10;
		printf("%d",s);
	}
	}
	return 0; 
}
