#include <stdio.h>

int main(void)
{
	//  조건식  ? 맞으면 이게 출력됨 ( ture ) : 틀리면 이게 출력됨( false )
	// [조건식] ? [	] (true) : [ ](false)

	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("더 큰 값은 : %d\n", twenty);

	//조건 1: 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력하고 홀수라면 1을 출력
	// 출력 메세지 : 당신이 입력한 숫자는 *이며 결과 : *

	int num, result2;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	result2 = num % 2 == 0 ? 0 : 1;
	printf("당신이 입력한 숫자는 %d이며 결과는 %d 입니다.\n", num, result2);


	return 0;
}