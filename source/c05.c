#include <stdio.h>
int main(void)
{
	int month, day;
	int day_count = 0;
	printf("월을 입력하시오. ");
	scanf("%d",&month);
	printf("일을 입력하시오. ");
	scanf("%d",&day);
	if (month == 1){
		day_count = day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 2){
		day_count = 31+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 3){
		day_count = 31+28+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 4){
		day_count = 31*2+28+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 5){
		day_count = 31*2+28+30+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 6){
		day_count = 31*3+28+30+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 7){
		day_count = 31*3+28+30*2+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 8){
		day_count = 31*4+28+30*2+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 9){
		day_count = 31*5+28+30*2+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 10){
		day_count = 31*5+28+30*3+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 11){
		day_count = 31*6+28+30*3+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else if (month == 12){
		day_count = 31*6+28+30*4+day;
		printf("이 날짜는 1년 중 %d 번 쨰 날에 해당됩니다.\n",day_count);
	}
	else
		printf("잘못 입력하셨습니다.");
	printf("계속하려면 아무 키나 누르십시오.");
}