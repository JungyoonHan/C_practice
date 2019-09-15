#include <stdio.h>
int main(void)
{
	int count_all, birth_year;
	int count_young = 0;
	printf("가족이 몇 명인지 입력하세요 ");
	scanf("%d",&count_all);
	for (int i = 0; i < count_all; i++){
		printf("태어난 년도를 입력하세요 ");
		scanf("%d",&birth_year);
		int age = 2012-birth_year+1;
		if (age < 20){
			count_young += 1;
		}
	}
	printf("가족들 중에 미성년자는 모두 %d명입니다.\n",count_young);
	printf("계속하려면 아무 키나 누르십시오. . .\n");
}