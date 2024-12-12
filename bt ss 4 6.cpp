#include <stdio.h>
int main(){
	int a,b,e,p;
	printf("nhap vao chi so cong to dien dau thang ");
	scanf("%d",&a);
	printf("nhap vao chi so cong to dien cuoi thang ");
	scanf("%d",&b);
	e=b-a;
	if(e>=0 && e<50){
		p=e*10000;
	}else if(e>=50 || e<100){
		p=e*15000;
	}else if(e >= 100 || e < 150){
		p=e*20000;
	}else if(e>=150 || e<200){
		p=e*25000;
	}else{
		p=e*30000;
	}	
	printf("tien dien cua ban thang nay la %d", p);
	return 0;
}
