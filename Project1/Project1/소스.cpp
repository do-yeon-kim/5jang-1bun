#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		printf("��:%d ������:%d", b / a, b % a);
	}
	else {
		printf("��:%d ������:%d", a / b, a % b);
	}


	return 0;

}