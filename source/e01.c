#include <stdio.h>
int main(void){
	int length;
	printf("정사각형의 크기를 입력하시오. ");
	scanf("%d",&length);
	for (int i = 0 ; i < length; i++){
		for (int j = 0; j < length; j++){
			printf("# ");
		}
		printf("\n");
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}