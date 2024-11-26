#include<stdio.h>

int main(){
	int pass= 5555;
	int answer;
	printf("nhap mat khau: ");
	scanf("%d", &answer);
	if(answer == pass){
		printf("dung mat khau!"); 	
	}else{
		printf("sai mat khau!"); 
	} 

	return 0; 
} 
