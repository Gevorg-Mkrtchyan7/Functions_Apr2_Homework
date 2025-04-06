#include "main.c"

int power(int num, int pow){
	int res = 1;
	for(int i = 0; i < pow; ++i){
		res *= num;
	}
	return res;	
}
