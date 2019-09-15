#include <stdio.h>
int main(void)
{
	int mode, i, j, odd=3, even=2;
	printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요 ");
	scanf("%d",&mode);
	if (mode==1){
			for (i = 0; i < 4; i++){
				for (j = 1; j <= 9; j++){
					printf("%d x %d = %d\t",odd,j,odd*j);
					if (j == 3 || j == 6 || j == 9)
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
				if (j == 3 || j == 6 || j == 9)
					printf("\n");
			}
			printf("\n");
			even += 2;
		}
	}
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}