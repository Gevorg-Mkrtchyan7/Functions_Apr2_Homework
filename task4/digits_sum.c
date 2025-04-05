#include <stdio.h>
#include "main.c"

int digits_sum(int num){
	int a = 0;
	int res = 0;
	while(num){
		a = num % 10;
		res += a;
		num /= 10;
	}
	printf("%d \n", res);
	return 0;
}
