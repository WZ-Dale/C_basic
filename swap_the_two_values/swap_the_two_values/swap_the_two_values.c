#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 1, b = 2;
	int c = 0;
	printf("a = %d, b = %d\n", a, b);	//打印交换前的a,b
	c = a;
	a = b;
	b = c;
	printf("a = %d, b = %d\n", a, b);	//打印交换后的a,b
	system("pause");
	return 0;
}