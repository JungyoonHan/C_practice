#include <stdio.h>

int fibonacci(int i);

int main(void){
	for (int i = 0; i < 10; i++){
		printf("%d : %d\n",i,fibonacci(i));
	}
	return 0;
}

int fibonacci(int i){
	if (i == 1 || i == 2){
		return 1;
	}
	else
		return fibonacci(i-2) + fibonacci(i-1);
}