#include <stdio.h>

int main(void)
{
	// 국어 86 / 영어 75 / 수학 88 / 사회 60 / 과학 96
	
	float num1, num2, num3, num4, num5, result;
	num1 = 86;
	num2 = 75;
	num3 = 88;
	num4 = 60;
	num5 = 96;
	result = (num1 + num2 + num3 + num4 + num5) / 5.0f;
	
	printf("짱구의 국어 점수 : %.1f\n", num1);
	printf("짱구의 영어 점수 : %.1f\n", num2);
	printf("짱구의 수학 점수 : %.1f\n", num3);
	printf("짱구의 사회 점수 : %.1f\n", num4);
	printf("짱구의 과학 점수 : %.1f\n", num5);
	printf("짱구의 기말고사 성적 평균 : %.1f\n", result);

	//국어 64 / 영어 56 / 수학 87.5 / 사회 76.8 / 과학 96.9

	float total = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg = total / 5.0f;

	printf("철수의 기말고사 성적 평균 : %.2f \n", avg);

	return 0;
}