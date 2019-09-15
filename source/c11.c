#include <stdio.h>
int main(void)
{
	int year;
	printf("년도를 입력하세요 ");
	scanf("%d",&year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("입력하신 년도는 윤년입니다.\n");
	else
		printf("입력하신 년도는 윤년이 아닙니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}