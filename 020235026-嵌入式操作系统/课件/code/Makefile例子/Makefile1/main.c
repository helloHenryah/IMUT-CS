#include <stdio.h>
#include "d1.h"
extern void s1();
extern void s2();
int main(void)
{
	printf("This is main.\n");
	s1();
	s2();
	return 0;
}
