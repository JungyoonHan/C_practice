#include <stdio.h>
int main(void){
	float c_degree;
	printf("섭씨 온도를 입력하시오. ");
	scanf("%f",&c_degree);
	float f_degree = c_degree*1.8+32;
	printf("화씨 온도는 %.1f도 입니다. \n",f_degree);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}