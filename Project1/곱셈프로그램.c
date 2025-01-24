#include <stdio.h>
/*
숫자 2가지를 가지고 곱셈하는 함수 생성
숫자 2가지는 사용자가 입력
곱하기 연산 결과 : 0 X 0 = 00
*/

int a(int x, int y)
{
	return x * y;
}

int main(void)
{
	int x, y, result;
	printf("숫자 2개를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);
	result = a(x, y);

	printf("%d X %d = %d", x, y, result);
	
	return 0;
}