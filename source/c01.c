#include <stdio.h>
int main(void){
	int birth_year, age;
	printf("태어난 년도를 입력하세요 ");
	scanf("%d",&birth_year);
	age = 2012-birth_year+1;
	if (age < 7)
		printf("유아입니다.");
	else if ((age >= 7) && (age < 13))
		printf("어린이입니다.");
	else if ((age >= 13) && (age < 20))
		printf("청소년입니다.");
	else if ((age >= 20) && (age < 30))
		printf("청년입니다.");
	else if ((age >= 30) && (age < 60))
		printf("중년입니다.");
	else
		printf("노년입니다." );
	printf("\n계속하려면 아무 키나 누르십시오. . .\n");
}