#include <stdio.h>
int main(void)
{
	int days;
	printf("날수를 입력하세요 ");
	scanf("%d",&days);
	int seconds = days*24*60*60;
	int m_count = seconds/1000000;
	printf("날수에 해당되는 기간은 모두 %d초입니다.\n",seconds);
	if (m_count>0)
		printf("100만 초가 모두 %d번이나 포함됩니다.\n",m_count);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}