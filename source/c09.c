#include <stdio.h>
int main(void)
{
	int income, tax;
	printf("연봉(원 단위)을 숫자로 입력하세요 ");
	scanf("%d",&income);
	if (income < 10000000)
		tax = income/1000*95;
	else if (income >= 10000000 && income < 40000000)
		tax  = income/100*19;
	else if (income >= 40000000 && income < 80000000)
		tax  = income/100*28;
	else
		tax = income/100*37;
	printf("연봉 금액에 대한 소득세는 %d원 입니다.\n계속하려면 아무 키나 누르십시오. . .\n",tax);
}