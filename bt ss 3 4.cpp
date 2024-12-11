#include <stdio.h>
int main(){
	float m,l,e,sum,ave;
	printf("nhap vao diem toan \n");
	scanf("%f",&m);
	printf("nhap vao diem van \n");
	scanf("%f",&l);
	printf("nhap vao diem anh \n");
	scanf("%f",&e);
	sum=m+l+e;
	ave=sum/3;
	printf("tong diem la %.2f",sum);
	printf("diem trung binh la %.2f",ave);
	return 0;
}
