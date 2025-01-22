#include <stdio.h>

int main(void)
{
	int x = 10, y= 20;
	int*ptr = &x;
	
	printf("%d\n", *ptr);
	*ptr = 30;

	ptr = &y;
	printf("%d\n", *ptr);

	return 0;
}