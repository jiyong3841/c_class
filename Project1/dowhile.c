#include <stdio.h>

int main(void)
{
	/*
	�ڷ�� ������ = �ʱ�ȭ;
	do{
		�����ų �ڵ�;
		������;
	} while(���ǽ�);
	*/

	int do_while = 1;
	do {
		printf("do while�� %d ���� ��\n", do_while);
		do_while++;
	} while (do_while <= 10); 
	// ������ �������� �ʴ��� �ּ� 1���� �����Ѵ�.
	// while������ ������ : �ּ� ���� Ƚ��
	return 0;
}