#include <stdio.h>
int main(){
	int day,month,year,leapyear=0;
	printf("nhap vao nam ");
	scanf("%d", &year);
	if(year%4==0 && year%100!=0 || year%400==0){
		leapyear=1; 
	}
	//nam 
	if(year<0){
		printf("nam khong hop le"); 
		return 0;
	}else{ //thang
		printf("nhap vao thang ");
		scanf("%d", &month);
		if(month<1 || month>12){
			printf("thang khong hop le ");
			return 0; 
		}else{//ngay
			printf("nhap vao ngay ");
			scanf("%d", &day);
			if(day<1 || month%2!=0 && day>31 ||month%2==0 && day>30 || leapyear==1 && month==2 && day>29 || leapyear==0 && month==2 && day>28){
				printf("ngay thang nam khong hop le");
			}else{
				printf("ngay %d thang %d nam %d", day, month, year);
				printf("\n %d", leapyear);
			}
		}
	}
	
	return 0;
}
