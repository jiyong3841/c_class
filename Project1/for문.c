#include <stdio.h>

int main(void)
{
	/*
	for(�ʱⰪ; ���ǽ�; ������){
		���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/
	int i;
	for (i = 1; i <= 10; i++) {
		printf("for�� �ݺ� %d ��°\n", i);
	}

	int a;
	for(a = 10; a >= 1; a--){
		printf("%d ��°\n", a);
	}

	int num;
	for (num = 1; num <= 10; num++) {
		printf("%d�� ������ %d\n", num, num * num);
	}

	return 0;
}