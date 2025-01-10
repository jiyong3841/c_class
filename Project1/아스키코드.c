#include <stdio.h>
//아스키 코드 교재 345,346 페이지 참고
int main(void)
{
	char ch1 = 'A';
	printf("%c\n", ch1);
	char ch2 = 65;
	printf("%c\n", ch2); 
	printf("문자 : %c, 숫자 : %d\n", ch1, ch1);
	printf("문자 : %c, 숫자 : %d\n", ch2, ch2);

	int num3 = 'c';
	printf("문자 : %c, 숫자 : %d\n", num3, num3);

	return 0;
}