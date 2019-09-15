#include <stdio.h>
int main(void)
{
	int kor, eng, math;
	printf("국어 점수를 입력하세요. ");
	scanf("%d",&kor);
	printf("영어 점수를 입력하세요. ");
	scanf("%d",&eng);
	printf("수학 점수를 입력하세요. ");
	scanf("%d",&math);
	int total = kor+eng+math;
	float average = total/3.0;
	printf("입력하신 점수의 총점은 %d이고,\n평균은 %.1f입니다.\n",total,average);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}