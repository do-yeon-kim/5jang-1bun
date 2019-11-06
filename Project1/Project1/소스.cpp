#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		printf("몫:%d 나머지:%d", b / a, b % a);
	}
	else {
		printf("몫:%d 나머지:%d", a / b, a % b);
	}


	return 0;

}