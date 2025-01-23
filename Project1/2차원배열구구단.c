#include <stdio.h>

int main(void)
{
	//2차원 배열을 선언한 후 구구단을 출력해보세요
	/*
	int arr[10][10];

	for (int i = 2; i < 10; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 10; j++) {
			arr[i][j] = i * j;
			printf("%d * %d = %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
	*/
	int gugudan[8][9];
	int i, j;
	for (int i = 0; i < 8; i++) {
		printf("%d단\n", i+2);
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i+2) * (j+1);
			printf("%d * %d = %d\n", i+2, j+1, gugudan[i][j]);
		}
		printf("\n");
	}

	return 0;
}