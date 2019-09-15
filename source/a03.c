#include <stdio.h>
int main(void)
{
	int width, height;
	printf("직사각형의 가로 크기를 입력하시오. ");
	scanf("%d",&width);
	printf("직사각형의 세로 크기를 입력하시오. ");
	scanf("%d",&height);
	int area = width*height;
	printf("직사각형의 넓이는 %d입니다.\n",area);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}