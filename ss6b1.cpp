#include<stdio.h>

int main(){
	int number, sum;
	
	for(int i = 1; i <= 5; i ++ ){
		printf("nhap so thu %d = ",i );
		scanf("%d", &number);
		if(number % 2 != 0){
			sum += number; 
		} 
	}
	printf("tong = %d", sum); 
	return 0; 
} 
