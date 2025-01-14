#include <stdio.h>

int main(void)
{
	/*
	a = b : a = b 
	a += b : a = a + b
	a -= b : a = a - b
	a *= b : a = a * b
	a /= b : a = a / b
	a %= b  : a % b
	*/
	int num1 = 3, num2 = 4;

	num1 += 3; // num1 = 6
	num2 *= 4; // num2 = 16
	
	printf("num1 +=3의 결과 : %d\n", num1);
	printf("num2 *= 4의 결과 : %d\n", num2);


	return 0; 
}