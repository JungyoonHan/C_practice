#include <stdio.h>
int main(void)
{
	int width, height;
	printf("직사각형의 가로 크기를 입력하시오. ");
	scanf("%d",&width);
	printf("직사각형의 세로 크기를 입력하시오. ");
	scanf("%d",&height);
	if (width == height)
		printf("정사각형입니다.\n");
	else if (width >= height*2)
		printf("좌우로 길쭉한 직사각형입니다.\n");
	else if (height >= width*2)
		printf("위아래로 길쭉한 직사각형입니다.\n");
	else if (width > height)
		printf("일반적인 가로형 직사각형입니다.\n");
	else if (height > width)
		printf("일반적인 세로형 직사각형입니다.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}