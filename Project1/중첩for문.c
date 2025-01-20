#include <stdio.h>

int main(void)
{
	/*
		for(){
			for(){
			}
		}
	*/

	int first_for, second_for;

	for (first_for = 1; first_for <= 3; first_for++) {
		for (second_for = 1; second_for <= 2; second_for++) {
			printf("%d За %d ї­\n", first_for, second_for);
		}
		printf("\n");
	}



	return 0;
}