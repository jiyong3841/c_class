#include <stdio.h>


struct student
{
	char name[20];
	int age;
	int grade;
};


int main(void)
{
	/*
	�л� ����ü ����� (��� : �̸� ����, �г�)
	����ü�� �迭�� ���� �� �ʱ�ȭ(2��)
	��� �л��� ������ ���
	*/

	struct student students[2] = {
		{"ȫ�浿", 17, 3},
		{"��ö��", 18, 4}
	};
	
	for (int i = 0; i < 2; i++) {
		printf("�̸� : %s, ���� : %d, �г� %d\n", students[i].name, students[i].age, students[i].grade);
	}



	return 0;
}