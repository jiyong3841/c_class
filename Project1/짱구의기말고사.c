#include <stdio.h>

int main(void)
{
	// ���� 86 / ���� 75 / ���� 88 / ��ȸ 60 / ���� 96
	
	float num1, num2, num3, num4, num5, result;
	num1 = 86;
	num2 = 75;
	num3 = 88;
	num4 = 60;
	num5 = 96;
	result = (num1 + num2 + num3 + num4 + num5) / 5.0f;
	
	printf("¯���� ���� ���� : %.1f\n", num1);
	printf("¯���� ���� ���� : %.1f\n", num2);
	printf("¯���� ���� ���� : %.1f\n", num3);
	printf("¯���� ��ȸ ���� : %.1f\n", num4);
	printf("¯���� ���� ���� : %.1f\n", num5);
	printf("¯���� �⸻��� ���� ��� : %.1f\n", result);

	//���� 64 / ���� 56 / ���� 87.5 / ��ȸ 76.8 / ���� 96.9

	float total = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg = total / 5.0f;

	printf("ö���� �⸻��� ���� ��� : %.2f \n", avg);

	return 0;
}