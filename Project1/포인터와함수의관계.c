#include <stdio.h>

//������ �ϳ� �����(�ӽð���)
//�Ű������� ���޹��� ù��° ���ڰ��� �ӽð����� �־���� �ι�° �Ű������� �޾ƿ� ���ڰ��� ù��° �Ű������� ����

int swap(int* x, int* y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
	
}

int main(void)
{
	int a = 3, b = 5;

	swap(&a, &b);
	printf("%d %d\n", a, b);

	/*
	call-by-value : �����ϴ� ���� ( �� ������ ���� )
	call-by-reference : �ּҸ� �����ϴ� ����
	*/

	return 0;
}