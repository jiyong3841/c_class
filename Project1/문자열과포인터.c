#include <stdio.h>

int main(void) 
{
	char good[] = "good";
	char* bad = "bad";

	good[0] = 'H';
	//good = "new good"' �Ұ���
	// bad[0] = 's'; �Ұ���
	bad = "new bad";
	printf("%s, %s", good, bad);
	
	return 0;
}