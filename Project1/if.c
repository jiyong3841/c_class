#include <stdio.h>

int main(void)
{
	/*
	if(조건식){
		조건을 만족할 경우 실행할 코드를 작성;
	}
	else {
		조건의 값이 false라면 이 값이 실행됨;
	}
	if문의 소괄호(조건)에는 true, false 로 나뉘는데 true일 경우에만 {중괄호} 코드를 실행한다.

	if(조건식)
		실행할 코드가 한줄이라면 {중괄호} 생략 가능
	*/

	int ifNumber = 10;

	if (ifNumber < 500) {
		printf("%d 이 500보다 작니? 에 대한 물음은 참입니다.\n", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d는 3과 같아", ifNumber);
	}

	// 사용자로부터 걸음수를 입력받아 걸음 수를 조건문으로 만들고 10000보 이상일 때 하루에 *****보 걷다니 대단해요!

	int num1;

	printf("하루에 걸은 걸음 수를 입력하세요 : ");
	scanf_s("%d", &num1);

	if (num1 >= 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다!\n", num1);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.\n");
	}
	else {
		printf("alpha는 B와 다릅니다.\n");
	}

	int likeNumber;
	printf("당신이 좋아하는 숫자를 입력하세요 : ");
	scanf_s("%d", &likeNumber);
	if (likeNumber >= 10) {
		printf("당신이 좋아하는 숫자는 10이상이군요~");
	}
	else {
		printf("당신이 좋아하는 숫자는 10미만이군요~");
	}


	return 0;
}