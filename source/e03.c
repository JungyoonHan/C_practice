#include <stdio.h>
int main(void){
	int height;
	printf("이등변 삼각형의 높이를 입력하시오. ");
	scanf("%d",&height);
	int h = height;
	for (int i = 0; i < height; i++){
		//왼쪽 직각삼각형
		for (int j = 0; j < h-1; j++){
			printf(" ");
		}
		h--;
		for (int j = 0; j <= i; j++){
			printf("*");
		}
		//오른쪽 직각삼각형
		for (int j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}