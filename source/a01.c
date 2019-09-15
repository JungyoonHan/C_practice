#include <stdio.h>
int main(void)
{
	int birth_year;
	printf("태어난 년도를 입력하시오. ");
	scanf("%d",&birth_year);
	int age = 2012 - birth_year + 1;
	printf("당신의 나이는 %d살 입니다.\n",age);
	printf("계속하려면 아무 키나 누르십시오....\n");
}