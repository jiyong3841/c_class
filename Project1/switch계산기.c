#include <stdio.h>

int main(void)
{
	//+,-,*, /
	// ���� ������ 1��, ������ 2��
	char a;
	int num1, num2;
	
	printf("�����ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &a, 1);

	printf("���� �ΰ��� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);
	
		switch (a) {
		case '+': printf("%d + %d= %d\n", num1, num2, num1 + num2);
			break;
		case '-': printf("%d - %d= %d\n", num1, num2, num1 - num2);
			break;
		case '*': printf("%d * %d= %d\n", num1, num2, num1 * num2);
			break;
		case '/': 
			if (num2 != 0) {
				printf("%.1f / %.1f= %.1f\n", (float)num1, (float)num2, (float)num1 / (float)num2);
			}
			else {
				printf("0���� ���� �� �����ϴ�. \n");
			}
			break;

		default: printf("��ȿ���� ���� �����Դϴ�.");
			break;
		}
	
	return 0;
}