#include <stdio.h>
#include "main.c"

int hex(int num){
	int a = 0;
	int c = 0;
	int num2 = num;
	while(num){
		num /= 16;
		c++;
	}
	char arr[c] = {};
	for(int i = c - 1; num2; --i){	
		a = num2 - (num2 / 16) * 16;
		if(a < 10){
			arr[i] = 48 + a;
		}else{
			arr[i] = 55 + a;
		}	
		num2 /= 16;	
	} 	
	printf("0x");
	for(int i = 0; i < c; ++i){
		printf("%c", arr[i]);
	}	
	printf("\n");

	return 0;
}
