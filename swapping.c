/*
	A program that reads in, displays and exchanges integer values of two variables

	Program algorithm

	start
	set up variables
	initialize variables
	read in the value of variable_a
	read in the value of variable_b
	display the values of variables a and b
	copy the value of variable_a into c(the temporary varible)
	copy the value of variable_b into the location of variale_a
	copy the value in c into the location of variable_b
	display the values of variables a and b
	stop
*/
#include <stdio.h>
int main()
{
	//int a, b, c;
	printf("Before the swap:\n");
	int a, b;
	scanf("%d\t%d",&a, &b);
	/*
	int a = 10;
	int b = 20;
	*/
	int c = 0;	//this is the temporary variable, holding the values temporarily during the swap
	printf("A=%d\tB=%d\t\n",a, b);
	c = a;	//the value of the a is moved into the temporary variable, somewhat leaving a vaccant
	a = b;	//the value of be is moved into the somewhat vaccant a, this making the first swap
	b = c;	//the value of a that was temporarily held up at c is moved to b making this the final part of the swap.
	printf("After the swap:\n");
	printf("A=%d\tB=%d\n",a, b );
	/* code */
	return 0;
}