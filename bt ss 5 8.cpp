#include <stdio.h>
int main (){
	int a,b,i=1;
	printf("nhap vao 2 so nguyen duong \n");
	scanf("%d \n %d",&a,&b);
	if(a<0 || b<0){
		printf("so nhap vao phai la so nguyen duong");
		return 0;
	}
	while (b*i%a!=0){
		i++; 
	} 
	printf("boi chung nho nhat la %d", b*i); 
	return 0;
}
