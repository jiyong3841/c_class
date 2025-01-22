#include <stdio.h>

int main(void)
{
	// 변수를 만들어서
	// 변수에 들어있는 값 : 변수의 주소값( 4 : 1004)
	
	int num =4;
	int* ptr = &num;

	printf("%d : %p", *ptr, ptr);
	
	return 0;
}