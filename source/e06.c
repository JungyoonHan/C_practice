#include <stdio.h>
int main(void){
	int rows, columns, number, i, j;
	printf("출력하려는 행의 크기와 열의 크기를 입력하시오 ");
	scanf("%d%d",&rows,&columns);
	for (i = 1; i <= rows; i++){
		for (j = 1; j <= columns; j++){
			number = i*j;
			printf("%4d",number);
		}
		printf("\n");
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}