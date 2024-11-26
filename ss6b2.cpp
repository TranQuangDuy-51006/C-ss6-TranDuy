#include<stdio.h>

int main(){
	int number, chan, le;
	
	for(int i = 1; i <= 5; i ++ ){
		printf("nhap so thu %d = ",i );
		scanf("%d", &number);
		if(number % 2 == 0){
			chan ++; 
		} 
	}
	le = 5 - chan; 
	printf("%d so chan va %d so le", chan, le); 
	return 0; 
} 
