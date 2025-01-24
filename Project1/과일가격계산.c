#include <stdio.h>
// 두 가격 중 더 큰 값을 반환하는 함수, 딸기 가격 입력받고 귤 가격을 입력받아서 더 비싼 과일의 가격을 출력

int a(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if (y > x)
	{
		return y;
	}
	else {
		return 0;
	}
}

int main(void)
{
	int x, y, result;
	printf("딸기의 가격을 입력하세요 : ");
	scanf_s("%d", &x);
	printf("귤의 가격을 입력하세요 : ");
	scanf_s("%d", &y);
	
	result = a(x, y);
	printf("%d", result);

	return 0;
}