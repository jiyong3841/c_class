#include <stdio.h>

int main(void)
{
	/*
	자료명 변수명 = 초기화;
	do{
		실행시킬 코드;
		증감식;
	} while(조건식);
	*/

	int do_while = 1;
	do {
		printf("do while문 %d 연습 중\n", do_while);
		do_while++;
	} while (do_while <= 10); 
	// 조건을 충족하지 않더라도 최소 1번은 실행한다.
	// while문과의 차이점 : 최소 실행 횟수
	return 0;
}