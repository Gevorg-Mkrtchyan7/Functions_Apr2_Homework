#include "main.c"

int bazm(int a){
	for(int i = 1; i < 10; ++i){
		printf("%d * %d = %d \n", a, i, a * i);
	}
	return 0;
}
