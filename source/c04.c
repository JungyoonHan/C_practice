#include <stdio.h>
int main(void)
{
	float m2_area, pyung_area;
	printf("아파트의 분양 면적(제곱미터)을 입력하세요 ");
	scanf("%f",&m2_area);
	pyung_area = m2_area/3.305;
	printf("아파트의 평형은 %.1f 입니다.\n",pyung_area);
	if (pyung_area < 15)
		printf("소형아파트입니다.\n");
	else if (pyung_area >= 15 && pyung_area < 30)
		printf("중소형아파트입니다.\n");
	else if (pyung_area >= 30 && pyung_area < 50)
		printf("중형아파트입니다.\n");
	else
		printf("대형아파트입니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}