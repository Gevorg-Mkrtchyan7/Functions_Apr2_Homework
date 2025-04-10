#include <stdio.h>

int fakt(int num){
	int a = 1;
	for(int i = num; i > 0; --i){
		a *= i;
	}
	return a;
}
