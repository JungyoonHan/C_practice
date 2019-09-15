#include <stdio.h>
int main(void)
{
	int height, weight;
	printf("신장(cm단위)을 입력하세요 ");
	scanf("%d",&height);
	printf("체중(kg단위)를 입력하세요 ");
	scanf("%d",&weight);
	float fheight = height/100.0;
	float bmi = weight / (fheight*fheight);
	if (bmi >= 25)
		printf("당신은 비만이십니다.\n");
	else 
		printf("당신은 비만이 아니군요.\n");
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}