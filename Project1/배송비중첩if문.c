#include <stdio.h>

int main(void)
{
	/*
	10만원 이상 구매하고, 회원이라면 (100,000 이상 구매로 사은품이 증정됩니다. 50,000 이상 구매 회원은 배송비도 무료입니다.
	10만원 이상 구매했지만 회원이 아니라면 (100,000 이상 구매로 사은품이 증정됩니ㅏㄷ. 비회원은 배송비 5,000원 부과됩니다.)

	5만원 이상 구매하고, 회원이라면 (회원 50,000이상 구매 고객은 배송비 무료입니다.)
	비회원이면 (비회원은 배송비 5,000원 부과됩니다.)
	구매금액이 5만원 미만이라면 (구매금액이 50,000원 미만입니다. 배송비 5,000원 부과됩니다.)


	*/

	int num, a;
	printf("구매한 가격을 입력하세요 : ");
	scanf_s("%d", &num);
	printf("회원이라면 1 회원이 아니라면 0을 입력해 주세요 : ");
	scanf_s("%d", &a);

	if (num >= 100000) {
		printf("100,000 이상 구매로 사은품이 증정됩니다.");
		if (a == 1) {
			printf(" 50,000 이상 구매 회원은 배송비도 무료입니다.");
		}
		else{
			printf("비회원은 배송비 5,000원 부과됩니다.");
		}
	}
	else if (num >= 50000) {
		if (a == 1) {
			printf("회원 50,000이상 구매 회원은 배송비 무료입니다.");
		}
		else {
			printf("비회원은 배송비 5,000원 부과됩니다.");
		}
		}
	else {
		printf("구매금액이 50,000원 미만입니다. 배송비 50,000원 부과됩니다.");
	}
	return 0;
}