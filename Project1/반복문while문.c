#include <stdio.h>

int main(void)
{
	/*
	�ڷ��� ������ = �ʱⰪ;
	while(����){
		�ݺ���Ű���� �ϴ� �ڵ� �ۼ�;
		������;
	}
	*/
	int c_class = 1;

	while (c_class <= 10) {
		printf("c��� ���� %d\n", c_class);
		c_class++;
	}
	//while���� if���� Ȱ���� 6���� �� ���
	int num1 = 1;
	while (num1 <=60) {
		if (num1 % 6 ==0) {
			printf("%d\n", num1);
		}
		num1++;
	}

	return 0;
}