#include <stdio.h>

int main(void)
{
	//  ���ǽ�  ? ������ �̰� ��µ� ( ture ) : Ʋ���� �̰� ��µ�( false )
	// [���ǽ�] ? [	] (true) : [ ](false)

	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d\n", twenty);

	//���� 1: ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0�� ����ϰ� Ȧ����� 1�� ���
	// ��� �޼��� : ����� �Է��� ���ڴ� *�̸� ��� : *

	int num, result2;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	result2 = num % 2 == 0 ? 0 : 1;
	printf("����� �Է��� ���ڴ� %d�̸� ����� %d �Դϴ�.\n", num, result2);


	return 0;
}