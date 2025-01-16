#include <stdio.h>

int main(void)
{
	/*
	if(조건문){
		조건을 만족할  경우 실행
	}
	else	if(조건문2){
		조건2를 만족할 경우 실행
	}
	else	if(조건문3){
		조건3를 만족할 경우 실행
	}
	else	if(조건문4){
		조건4를 만족할 경우 실행
	}
	else{
		모든 조건을 만족하지 않을 경우 실행
	}
	*/

	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이\n");
	}
	else if (num_a == 1) {
		printf("강아지\n");
	}
	else {
		printf("햄스터\n");
	}

	// 학점이 90점이상이라면 A학점, 참 잘했어요! 출력
	//80이상이라면 B학점 70이상이라면 C학점 // 60이상이라면 D학점 //범위내에 없다면 재시험 출력 

	int num;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num >= 90) {
		printf("A학점, 참 잘했어요!\n");
	}
	else if (num >= 80) {
		printf("입력받은 점수 %d점은 B학점입니다.\n", num);
	}
	else if (num >= 70) {
		printf("입력받은 점수 %d점은 C학점입니다.\n", num);
	}
	else if (num >= 60) {
		printf("입력받은 점수 %d점은 D학점입니다.\n", num);
	}
	else {
		printf("%d점은 재시험입니다.\n", num);
	}
	
	
	//복합조건 버스비 0~7세 유아는 800원 8세 19세 학생 1200원 20~34세 청년 1600원 35~59세 중년은 2000 60~150세 노년 버스비 무료
	// 논리연산자 사용 ( ||, &&, !)
	int age;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (0<=age && age<=7) {
		printf("유아의 버스비는 800원입니다.\n");
	}
	else if (8 <= age && age <= 19) {
		printf("학생의 버스비는 1200원입니다.\n");
	}
	else if ( 20<= age && age <= 34) {
		printf("청년의 버스비는 1600원입니다.\n");
	}
	else if (35 <= age && age <= 59) {
		printf("중년의 버스비는 2000원입니다.\n");
	}
	else if (60 <= age && age <= 150) {
		printf("노년의 버스비는 무료입니다.\n");
	}
	else {
		printf("오류");
	}
	return 0;
}