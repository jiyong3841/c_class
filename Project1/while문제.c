#include <stdio.h>

int main(void)
{
	// while 문을 사용해서 사용자가 0을 입력할 때까지 프로그램은 끝나지 않는다.
	// 사용자가 어떤 숫자를 입력했다면 (입력한 숫자는 *입니다. (0입력시 종료)
	/*
	int num =0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("입력한 숫자는 %d입니다.\n", num);

	while (num != 0) {
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num);
		printf("입력한 숫자는 %d입니다.\n", num);
	}
	*/

	int num1 = 1;
	while (num1 != 0) {
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &num1);
		if (num1 == 0) {
			printf("종료합니다.");
		}
		else {
			printf("입력한 숫자는 %d입니다.", num1);
		}
	}

	return 0;
}


