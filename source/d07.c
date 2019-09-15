#include <stdio.h>
int main(void)
{
	int a, b, x_begin, x_end;
	printf("1차 함수 y=ax+b의 계수 a와 b를 입력하시오 ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("x좌표의 시작 값과 끝 값을 입력하시오 ");
	scanf("%d",&x_begin);
	scanf("%d",&x_end);
	for (int x = 1; x <= x_end; x++){
		int y = a*x+b;
		printf("좌표 (%d, %d)\n",x,y);
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}