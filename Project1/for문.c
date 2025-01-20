#include <stdio.h>

int main(void)
{
	/*
	for(초기값; 조건식; 증감식){
		조건식이 참이라면 실행시킬 코드;
	}
	*/
	int i;
	for (i = 1; i <= 10; i++) {
		printf("for문 반복 %d 번째\n", i);
	}

	int a;
	for(a = 10; a >= 1; a--){
		printf("%d 번째\n", a);
	}

	int num;
	for (num = 1; num <= 10; num++) {
		printf("%d의 제곱은 %d\n", num, num * num);
	}

	return 0;
}