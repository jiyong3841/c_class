#include <stdio.h>

int main(void)
{
	// ������ ����
	// ������ ����ִ� �� : ������ �ּҰ�( 4 : 1004)
	
	int num =4;
	int* ptr = &num;

	printf("%d : %p", *ptr, ptr);
	
	return 0;
}