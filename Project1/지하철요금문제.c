#include <stdio.h>

int main(void)
{
	//����ڰ� 20�� �̻��̸� 1280�� �̸��̶�� 800���� �޴� ���α׷� �����ϱ�
	//�������ǿ�����
	int age, result;
	printf("������� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	result = age >= 20 ? 1280 : 800;
	printf("����ö ����� %d�� �Դϴ�.\n", result);
	
	
	return 0;
}