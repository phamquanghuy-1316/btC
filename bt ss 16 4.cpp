#include <stdio.h>

void printElement(int *arr){
	for(int i=0; i<10;i++){
		printf("%d ",*(arr+i));
	}
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printElement(arr);
	return 0; 
} 
