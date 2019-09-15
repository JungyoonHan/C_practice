#include <stdio.h>
int main(void)
{
	int mode, i, j, column, odd=3, even=2;
	printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요 ");
	scanf("%d",&mode);
	printf("한 줄에 출력할 갯수를 입력하시오. ");
	scanf("%d",&column);
	if (mode==1){
			for (i = 0; i < 4; i++){
				for (j = 1; j <= 9; j++){
					printf("%d x %d = %d\t",odd,j,odd*j);
					if (j % column == 0)
						printf("\n");
				}
				printf("\n");
				odd += 2;
			}
		}
	else if (mode==2){
		for (i = 0; i < 4; i++){
			for (j = 1; j <= 9; j++){
				printf("%d x %d = %d\t",even,j,even*j);
				if (j % column == 0)
					printf("\n");
			}
			printf("\n");
			even += 2;
		}
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}