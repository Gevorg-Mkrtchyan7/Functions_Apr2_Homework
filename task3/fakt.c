#include "main.c"

int fakt(int num){
	int a = 1;
	for(int i = num; i > 0; --i){
		a *= i;
	}
	printf("%d \n", a);
	return 0;
}
