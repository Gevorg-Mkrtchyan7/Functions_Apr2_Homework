#include <stdio.h>

void binary(int num){
	int res = 1;
	int res2 = 0;
	int a = 0;
	while(num){
		if(num % 2 != 0){
			a = 1;
			res = res * 10 + a;	
		}else{
			a = 0;
			res = res * 10;
		}
		num /= 2;
	}

	while(res){
		a = res % 10;
		res2 = res2 * 10 + a;
		res /= 10;
	}
	printf("%d \n", res2 / 10);
}
