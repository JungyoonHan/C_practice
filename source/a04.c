#include <stdio.h>
int main(void)
{
	float m2_area, pyung_area;
	printf("아파트의 분양 면적을 입력하시오. ");
	scanf("%f",&m2_area);
	pyung_area = m2_area/3.305;
	printf("아파트의 평형은 %.1f입니다.\n",pyung_area);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}