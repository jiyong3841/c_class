#include <stdio.h>

int main(void)
{
	// << : ���� ����Ʈ ������ ( a * 2^n | n = �ű� ĭ�� )
	// >> : ������ ����Ʈ ������ ( a / 2^n | n = �ű� ĭ�� )
	// 10 << 1 (20) - 00001010

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2; // 10 *  2�� 2��
	int shift_right = num2 >> 2; // 10 / 2�� 2��

	printf("%d << 1 %d\n", num1, shift_left);
	printf("%d >>2 1 %d\n", num2, shift_right);

	return 0;
}