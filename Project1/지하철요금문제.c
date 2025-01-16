#include <stdio.h>

int main(void)
{
	//사용자가 20살 이상이면 1280원 미만이라면 800원을 받는 프로그램 구현하기
	//삼항조건연산자
	int age, result;
	printf("사용자의 나이를 입력하세요 : ");
	scanf_s("%d", &age);

	result = age >= 20 ? 1280 : 800;
	printf("지하철 요금은 %d원 입니다.\n", result);
	
	
	return 0;
}