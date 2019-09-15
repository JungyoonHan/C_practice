#include <stdio.h>
int main(void)
{
	float m2_area, pyung_area;
	printf("아파트의 분양 면적(제곱미터)을 입력하시오.");
	scanf("%f",&m2_area);
	pyung_area = m2_area/3.305;
	printf("아파트의 평형은 %.1f이고,\n",pyung_area);
	if (pyung_area < 30)
		printf("30평 미만이므로 작은 아파트입니다.\n");
	else
		printf("30평 이상이므로 큰 아파트입니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}