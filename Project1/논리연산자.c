#include <stdio.h>

int main(void)
{
	/*
	|| ( or ) : 피연산자중 하나라도  true 이면 true 라는 결과값을 반환
	&& ( and ) :  피연산자중 하나라도 false 이면 false를 반환 ( 둘다 true 이어야 함 )
	! ( not ) : 논리부정연산자로 피연사자가 true 이면 false 라는 반대값을 반환 ( 단항연산자 )

	피연산자란? 연산대상데이터
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// 10 > 20 ? false or 20 >= 30 ? false or 30 >40 ? false
	printf("result : %d\n", result);

	result = one <= two && two >= three && three <= four;
	printf("result : %d\n", result);

	result = !(one > two);
	printf("result : %d\n", result);

	return 0;
}