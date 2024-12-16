#include <stdio.h>
int main(){
	float a,b;
	int choice,i=1;
	printf("nhap vao 2 so bat ky \n");
	scanf("%f \n %f",&a,&b);
/*	printf("%25s \n 1. Tong 2 so \n 2. Hieu 2 so \n 3. Tich 2 so \n 4. Thuong 2 so \n 5. Thoat \n   Lua chon cua ban ", "CALCULATOR");
	scanf("%d",&choice); */
	while (i == 1){
	printf("\n %25s \n 1. Tong 2 so \n 2. Hieu 2 so \n 3. Tich 2 so \n 4. Thuong 2 so \n 5. Thoat \n   Lua chon cua ban ", "CALCULATOR");
	scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Tong cua 2 so la %.2f", a+b);
				break;
			case 2:
				printf("Hieu cua 2 so la %.2f", a-b);
				break;
			case 3:
				printf("Tich cua 2 so la %.2f", a*b);
				break;
			case 4:
				printf("Thuong cua 2 so la %.2f", a/b);
				break;
			case 5:
				i=0;
		}
	}
	return 0;
}


