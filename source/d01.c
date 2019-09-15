#include <stdio.h>
int main(void)
{
	int number;
	printf("숫자를 입력하세요 ");
	scanf("%d",&number);
	if (number < 1)
		printf("잘못 입력하였습니다." );
	int totalsum = 0;
	for (int i = 0; i < number; i++){
		totalsum += i+1;
	}
	printf("1부터 입력한 숫자까지의 모든 정수를 더한 값은 %d 입니다.\n",totalsum);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}