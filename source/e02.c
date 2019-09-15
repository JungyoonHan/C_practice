#include <stdio.h>
int main(void)
{
	int height, blank;
	printf("직각삼각형의 높이와 왼쪽 여백의 크기를 입력하시오. ");
	scanf("%d%d",&height,&blank);
	for (int i = 0; i < height; i++){
		for (int j = 0; j < height+blank-1; j++){
			printf(" ");
		}
		blank--;
		for (int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}