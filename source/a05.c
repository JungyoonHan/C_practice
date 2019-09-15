#include <stdio.h>
int main(void)
{
	int days, seconds;
	printf("날 수를 입력하세요. ");
	scanf("%d",&days);
	seconds = days * 24 * 60 * 60;
	printf("날 수에 해당되는 시간은 모두 %d초 입니다.\n",seconds);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}