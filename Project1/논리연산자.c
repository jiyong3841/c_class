#include <stdio.h>

int main(void)
{
	/*
	|| ( or ) : �ǿ������� �ϳ���  true �̸� true ��� ������� ��ȯ
	&& ( and ) :  �ǿ������� �ϳ��� false �̸� false�� ��ȯ ( �Ѵ� true �̾�� �� )
	! ( not ) : �����������ڷ� �ǿ����ڰ� true �̸� false ��� �ݴ밪�� ��ȯ ( ���׿����� )

	�ǿ����ڶ�? ����������
	*/
	
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// 10 > 20 ? false or 20 >= 30 ? false or 30 >40 ? false
	printf("result : %d\n", result);

	result = one <= two && two >= three && three <= four;
	printf("result : %d\n", result);

	result = !(one > two);
	printf("result : %d\n", result);

	return 0;
}