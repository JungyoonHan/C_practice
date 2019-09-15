#include <stdio.h>
int main(void)
{
	int width, height,area;
	printf("직사각형의 가로 크기를 입력하시오.");
	scanf("%d",&width);
	printf("직사각형의 세로 크기를 입력하시오.");
	scanf("%d",&height);
	area = width*height;
	printf("직사각형의 넓이는 %d이고\n",area);
	if (width == height)
		printf("정사각형입니다.\n");
	else
		printf("정사각형이 아닙니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}