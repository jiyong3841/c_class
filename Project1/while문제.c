#include <stdio.h>

int main(void)
{
	// while ���� ����ؼ� ����ڰ� 0�� �Է��� ������ ���α׷��� ������ �ʴ´�.
	// ����ڰ� � ���ڸ� �Է��ߴٸ� (�Է��� ���ڴ� *�Դϴ�. (0�Է½� ����)
	/*
	int num =0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("�Է��� ���ڴ� %d�Դϴ�.\n", num);

	while (num != 0) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		printf("�Է��� ���ڴ� %d�Դϴ�.\n", num);
	}
	*/

	int num1 = 1;
	while (num1 != 0) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num1);
		if (num1 == 0) {
			printf("�����մϴ�.");
		}
		else {
			printf("�Է��� ���ڴ� %d�Դϴ�.", num1);
		}
	}

	return 0;
}


