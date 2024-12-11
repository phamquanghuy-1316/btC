#include <stdio.h>
int main(){
	float r,pi=3.14,c,s;
	printf("nhap vao ban kinh hinh tron ");
	scanf("%f", &r);
	c=2*r*pi;
	s=r*r*pi;
	printf("chu vi hinh tron la %.2f \n", c);
	printf("dien tich hinh tron la %.2f", s);
	return 0;
}
