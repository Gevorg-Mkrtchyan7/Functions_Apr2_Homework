#include <stdio.h>

int fib(int num){
	int a = 0;
	int b = 1;
	int c = 0;
	for(int i = 1; i <= num - 1 ; i++){
		c = b;
		b = a + b;
		a = c;
	}
	return b;
}
