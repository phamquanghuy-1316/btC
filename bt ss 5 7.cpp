#include <stdio.h>
int main (){
	int a,b,c,d,i=1;
	printf("nhap vao 2 so nguyen duong \n");
	scanf("%d \n %d",&a,&b);
	if(a<0 || b<0){
		printf("so nhap vao phai la so nguyen duong");
		return 0;
	}
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	d=a/i;
	while(b%d!=0){
		d=a/i;
		i++;
	}
	printf(" uoc chung lon nhat la %d", d);
	return 0;
}
