#include <stdio.h>
int main(void)
{
	int dan, i;
	while (1){
		printf("출력하고 싶은 구구단의 단 수를 입력하시오(2~9). ");
		scanf("%d",&dan);
		if (dan < 2 || dan > 9){
			printf("잘못 입력하였습니다.\n");
			continue;
		}
		else
			break;
	}
	for (i = 1; i <= 9; i++){
		printf("%d x %d = %d\n",dan,i,dan*i);
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}