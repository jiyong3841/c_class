#include <stdio.h>
// �� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�, ���� ���� �Է¹ް� �� ������ �Է¹޾Ƽ� �� ��� ������ ������ ���

int a(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if (y > x)
	{
		return y;
	}
	else {
		return 0;
	}
}

int main(void)
{
	int x, y, result;
	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &x);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &y);
	
	result = a(x, y);
	printf("%d", result);

	return 0;
}