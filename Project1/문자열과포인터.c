#include <stdio.h>

int main(void) 
{
	char good[] = "good";
	char* bad = "bad";

	good[0] = 'H';
	//good = "new good"' 불가능
	// bad[0] = 's'; 불가능
	bad = "new bad";
	printf("%s, %s", good, bad);
	
	return 0;
}