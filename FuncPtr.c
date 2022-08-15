/*
 *	[TRYING OUT FUNCTION POINTERS]
 */

#include <stdio.h>

int _ireallydontknow(int x, int y);

int main()
{
	//Creating a variable func_ptr 
	//This is a pointer to function _ireallydontknow
	int(*func_ptr)(int , int ) = &_ireallydontknow;

	//Calling function through its pointer
	int ret = func_ptr(1,3);
	printf("\n retval from func ptr: %d\n", ret);

	return 0;
}

int _ireallydontknow(int x, int y)
{
	printf("This will get complicated soon enough\n"
			"\n\tVals: [%d, %d]", x, y);
	return 69;
}






































































































