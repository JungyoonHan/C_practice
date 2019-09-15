#include <stdio.h>
int main(void)
{
	int num1, num2, num3, max_num, min_num;
	printf("첫번째 숫자를 입력하세요 ");
	scanf("%d",&num1);
	printf("두번째 숫자를 입력하세요 ");
	scanf("%d",&num2);
	printf("세번째 숫자를 입력하세요 ");
	scanf("%d",&num3);
	if (num1 >= num2 && num1 >= num3)
		max_num = num1;
	else if (num2 >= num3 && num2 >= num1)
		max_num = num2;
	else if (num3 >= num2 && num3 >= num1)
		max_num = num3;
	if (num1 <= num2 && num1 <= num3)
		min_num = num1;
	else if (num2 <= num3 && num2 <= num1)
		min_num = num2;
	else if (num3 <= num1 && num3 <= num2)
		min_num = num3;
	printf("가장 큰 수는 %d 이고, 가장 작은 수는 %d 입니다.\n",max_num,min_num);
	printf("계속하려면 아무 키나 누르십시오.\n");
}