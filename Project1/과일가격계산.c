#include <stdio.h>
// �� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�, ���� ���� �Է¹ް� �� ������ �Է¹޾Ƽ� �� ��� ������ ������ ���

int a(int price1, int price2)
{
	if (price1 > price2)
	{
		return price1;
	}
	else if (price2 > price1)
	{
		return price2;
	}
	else {
		return 0;
	}
}

int main(void)
{
	int price1, price2, result;
	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &price1);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &price2);
	
	result = a(price1, price2);
	printf("�� ��� ������ ���� : %d", result);

	return 0;
}