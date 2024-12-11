#include <stdio.h>

int main(){
	float a,h,S;
	printf("nhap vao do dai canh day cua tam giac ");
	scanf ("%f", &a);
	printf("nhap vao chieu cao cua tam giac ");
	scanf ("%f", &h);
	S=0.5*a*h;
	printf("dien tich cua hinh tam giac la %.2f", S);
	return 0;
}
