#include "main.c"

int parz_sum(int num){
	for(int i = 0; i < 4; ++i){
		if(num == i){
			return 0;
		}
	}
	for(int i = 1; i < num; ++i){
		if(num == 11 || num == 11 + 6 * i){
			return 0;
		}
	}
	return 1;
}
