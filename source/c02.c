#include <stdio.h>
int main(void){
	float input_degree;
	printf("물의 온도를 입력하세요 ");
	scanf("%f",&input_degree);
	if (input_degree < 0)
		printf("잘못입력하셨습니다.\n");
	else if (input_degree >= 0 && input_degree < 25)
		printf("냉수입니다.\n");
	else if (input_degree >= 25 && input_degree < 40)
		printf("미온수입니다.\n");
	else if (input_degree >= 40 && input_degree < 80)
		printf("온수입니다.\n");
	else
		printf("끓는물입니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}