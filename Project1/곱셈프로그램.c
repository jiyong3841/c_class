#include <stdio.h>
/*
���� 2������ ������ �����ϴ� �Լ� ����
���� 2������ ����ڰ� �Է�
���ϱ� ���� ��� : 0 X 0 = 00
*/

int a(int x, int y)
{
	return x * y;
}

int main(void)
{
	int x, y, result;
	printf("���� 2���� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);
	result = a(x, y);

	printf("%d X %d = %d", x, y, result);
	
	return 0;
}