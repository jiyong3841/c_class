#include <stdio.h>

int main(void)
{
	/*
	if(���ǽ�){
		������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	else {
		������ ���� false��� �� ���� �����;
	}
	if���� �Ұ�ȣ(����)���� true, false �� �����µ� true�� ��쿡�� {�߰�ȣ} �ڵ带 �����Ѵ�.

	if(���ǽ�)
		������ �ڵ尡 �����̶�� {�߰�ȣ} ���� ����
	*/

	int ifNumber = 10;

	if (ifNumber < 500) {
		printf("%d �� 500���� �۴�? �� ���� ������ ���Դϴ�.\n", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d�� 3�� ����", ifNumber);
	}

	// ����ڷκ��� �������� �Է¹޾� ���� ���� ���ǹ����� ����� 10000�� �̻��� �� �Ϸ翡 *****�� �ȴٴ� ����ؿ�!

	int num1;

	printf("�Ϸ翡 ���� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num1);

	if (num1 >= 10000) {
		printf("�Ϸ翡 %d�� �ȴٴ� ����ؿ�! ���� �����Դϴ�!\n", num1);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.\n");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�.\n");
	}

	int likeNumber;
	printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &likeNumber);
	if (likeNumber >= 10) {
		printf("����� �����ϴ� ���ڴ� 10�̻��̱���~");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10�̸��̱���~");
	}


	return 0;
}