#include <stdio.h>

/*
 *	This program let the user input 2 integers and calculate the sum.
 *	The sum result is then printed.
 */

int main(){
	int a, b;
	printf("Please input integer a.\n");
	scanf("%d", &a);
	printf("Please input integer b.\n");
	scanf("%d", &b);
	printf("The sum of a and b is %d.\n", a + b);
	return 0;
}
