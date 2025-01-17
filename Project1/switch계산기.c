#include <stdio.h>

int main(void)
{
	//+,-,*, /
	// 변수 문자형 1개, 정수형 2개
	char a;
	int num1, num2;
	
	printf("연산자를 입력하세요 : ");
	scanf_s("%c", &a, 1);

	printf("숫자 두개를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);
	
		switch (a) {
		case '+': printf("%d + %d= %d\n", num1, num2, num1 + num2);
			break;
		case '-': printf("%d - %d= %d\n", num1, num2, num1 - num2);
			break;
		case '*': printf("%d * %d= %d\n", num1, num2, num1 * num2);
			break;
		case '/': 
			if (num2 != 0) {
				printf("%.1f / %.1f= %.1f\n", (float)num1, (float)num2, (float)num1 / (float)num2);
			}
			else {
				printf("0으로 나눌 수 없습니다. \n");
			}
			break;

		default: printf("유효하지 않은 연산입니다.");
			break;
		}
	
	return 0;
}