#include <stdio.h>

void bazm(int a){
	for(int i = 1; i < 10; ++i){
		printf("%d * %d = %d \n", a, i, a * i);
	}
}
