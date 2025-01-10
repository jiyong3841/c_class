#include <stdio.h>

int main(void)
{
	unsigned int max_number = 2200000000; // unsigned 자료형의 값의 범위에서 음수를 양수로 전환 
	printf("%u\n", max_number);

	int num1 = 1;
	printf("%d\n", sizeof(num1)); // sizeof : 변수값이 차지하고 있는 메모리값 계산
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14));//double
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(short));

	return 0;
}