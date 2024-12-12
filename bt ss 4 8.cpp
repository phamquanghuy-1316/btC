#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap vao 3 canh cua 1 tam giac \n");
	scanf("%d %d %d",&a,&b,&c); 
	if(a+b>c && a+c>b && b+c>a){
		printf("La 3 canh cua tam giac"); 
	}else{
		printf("khong la 3 canh cua tam giac"); 
	}
	return 0; 
} 
