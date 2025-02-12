#include <stdio.h>
#define MYAGE =10 //매크로 함수 -> 가장 먼저 처리
int main(void)
{
	//변수 : 변할 수 있는 값
	int num = 2;
	num = 3;
	
	//상수 : 변하지 않는 값
	//리터럴 상수 : 정수(int) l(L), 실수(double)f
	//심볼릭 상수 : const
	//매크로 상수 : 심볼릭 상수의 일종, 매크로 상수 정의할때 세미콜론 사용 X

	//const int num3 = 3;
	const int NUM3 = 3; //대문자는 변수 상수 구분 목적으로 사용하기도 함
	//const int num3;
	//num3 = 3;

	return 0;
}

/*
3일차 수업 정리
1. 자료형의 종류 (문자, 정수, 실수)
2. 비트 - 데이터를 저장하거나 표현할 수 있는 가장 작은 단위
    1비트는 0또는 1중의 하나의 값만 저장할 수 있다.(하나의 상태)
	1비트가 여러개 모인다면, 예를 들어 8개가 모이면 8비트이다
	1비트가 모여서 2비트 3비트 ... 많아지면 표현할 수 있는 상태값이 많아진다.
	8비트를 1바이트라고 한다. 즉 1바이트는 8비트이며 0~255까지 256가지의 값이 들어갈 수 있다.

3. 값의 범위 (8비트)
	unsigned : 모든 비트를 숫자로 표현할 때 사용 ( 0 - 255)
	signed : 맨 위쪽 최상위 비트를 부호비트로 사용 0을 양수로 1을 음수로 읽는다.
				   즉 최상위 비트를 뺀 나머지 7개의 비트로 숫자의 크기를 나타낸다.
				   -128 ~ 127
4. sizeof 연산자 : 값을 직접 넣어도 되고, 자료형을 넣어서 확인 가능
5. 아스키코드, 매핑
6. 상수 (리터널 / 심볼릭 / 매크로)
*/