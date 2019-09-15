#include <stdio.h>
int main(void){
	float input_degree, output_degree;
	char kind;
	printf("온도를 입력하세요. ");
	scanf("%f",&input_degree);
	printf("입력하신 온도가 섭씨온도이면 C를, 화씨온도이면 F를 입력하세요. ");
	scanf(" %c",&kind);
	if (kind == 'c' || kind == 'C'){
		output_degree = input_degree*1.8+32;
	}
	else if (kind == 'f' || kind == 'F'){
		output_degree = (input_degree-32)/1.8;
	}
	printf("변환된 온도는 %.1f입니다.\n",output_degree);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}