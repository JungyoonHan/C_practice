#include <stdio.h>
int main(void)
{
	int a,b,c,x_begin,x_end,x,y;
	printf("2차 함수 y=ax^2+bx+c의 계수 a와 b,c를 입력하시오. ");
	scanf("%d%d%d",&a,&b,&c);
	printf("x좌표의 시작 값과 끝 값을 입력하시오 ");
	scanf("%d%d",&x_begin,&x_end);
	for (x = 1; x <= 10; x++){
		y = a*x*x+b*x+c;
		printf("좌표 (%d,%d)\n",x,y);
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}