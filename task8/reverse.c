#include <stdio.h>

int reverse(int num){
	int res = 0;
	int a = 0;

	while(num){
		a = num % 10;
		res = res * 10 + a;
		num /= 10;
	}
	return res;
}
