#include <stdio.h>

int main(void)
{
	/*
	& ( and ) : �����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1�� ��ȯ �ƴϸ� 0�� ��ȯ
	| ( or ) : �����ϴ� ��Ʈ�� �� �߿� 1�� �ϳ��� ������ 1�� ��ȯ
	^ ( xor ) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	~ ( not ) : ��Ʈ�� ���� 1�̸� 0����, 0�̶�� 1�� ��Ʈ ���� ������Ŵ
	*/

	int bit_five = 5; // 00000101 / 11111010 ( not ������ ����)
	int bit_three = 3; // 00000011 / 11111100 ( not ������ ����)

	printf("bit_five & bit_three = %d\n", bit_five & bit_three); // 0 + 0 + 1
	printf("bit_five | bit_three = %d\n", bit_five | bit_three);	// 4 + 2 + 1
	printf("bit_five ^ bit_three = %d\n", bit_five ^ bit_three); // 4 + 2 + 0
	printf("~bit_five= %d\n", ~bit_five); // -11111010 -> -6

	
	
	return 0;
}