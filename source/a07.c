#include <stdio.h>
int main(void)
{
	int gigabytes, megabytes, kilobytes;
	printf("파일 용량을 기가바이트 단위로 입력하세요. ");
	scanf("%d",&gigabytes);
	int megabytes = gigabytes*1024;
	int kilobytes = megabytes*1024;
	unsigned int bytes = kilobytes*1024;
	printf("입력하신 파일 용량은\n %d 메가바이트, %d 킬로바이트, %d 바이트 입니다.\n",megabytes,kilobytes,bytes);
	printf("계속하려면 아무 키나 누르십시오. . .");
}