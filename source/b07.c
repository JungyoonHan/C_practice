#include <stdio.h>
int main(void)
{
	int megabytes;
	long bytes;
	char usb2;
	int time;
	printf("파일 용량을 메가바이트 단위로 입력하세요 ");
	scanf("%d",&megabytes);
	bytes = megabytes*1024*1024;
	printf("USB 포트가 2.0이면 Y, 아니면 N을 입력하세요 ");
	scanf(" %c",&usb2);
	if (usb2 == 'Y' || usb2 == 'y'){
		time = bytes/60000000;
	}
	else if(usb2 == 'N' || usb2 == 'n'){
		time = bytes/1500000;
	}
	printf("파일 전송시간은 %d 초 입니다.\n",time);
	printf("계속하려면 아무 키나 누르십시오 . . .\n");
}