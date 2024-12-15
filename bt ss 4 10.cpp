#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("nhap vao so nguyen 1 ");
	scanf("%d",&a);
	printf("nhap vao so nguyen 2 ");
	scanf("%d",&b);
	printf("nhap vao so nguyen 3 ");
	scanf("%d",&c);
	if(a>b){
		d=a;
		a=b;
		b=d; 
	}else if(a>c){
		d=a;
		a=c;
		c=d; 
	}else if(b>c){
		d=b;
		b=c;
		c=d; 
	}
	printf("%d %d %d",a,b,c); 
	return 0;
}
