#include <stdio.h>
#include "main.c"

int parz(int num){
	if(num == 1){
		printf("This isn't simple number \n");
		return 0;
	}
	for(int i = 2; i < num - 1; ++i){
		if(num % i == 0){
			printf("This isn't simple number \n");
			return 0;
		}
	}
	printf("This is simple number \n");
	return 0;
}
