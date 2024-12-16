#include<stdio.h>
int main(){
	int a,s;
	printf("nhap vao 1 so tu 1 -> 10 ");
	scanf("%d",&a);
	for (int i=1; i<=10; i++){
		printf("%d * %d = %d \n",a,i,s=a*i);
	}
	return 0;
}
