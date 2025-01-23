#include <stdio.h>

int main(void)
{
	//int *p1,*p2,*p3,*p4,*p5;
	int* p[5];
	int a = 3;
	p[1] = &a;
	printf("%d\n", *p[1]);

	// 3길이의 포인터 배열을 선언하고, 세개의 정수형 변수를 선언한다.
	// 포인터 배열에 각 변수의 주소를 저장한 수
	// for문을 이용해 포인터 배열을 통해 각 변수에 들어있는 값을 출력해보기
	// 포인터배열 [*]가 가리키는 값 : *

	int* arr[3];
	int num1 = 0, num2 = 1, num3 = 2;

	arr[0] = &num1;
	arr[1] = &num2;
	arr[2] = &num3;
	
	for (int i = 0; i < 3; i++) {
		printf("포인터배열[%d]가 가리키는 값 : %d\n", i, *arr[i]);
	}
	

	return 0;
}