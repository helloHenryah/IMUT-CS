#include <stdio.h> 
int main(void) 
{ 
 double t1; 
 double t2; 
 double tmp; 
 for (t1 = 0; t1 < 2000.0 * 2000.0 * 2000.0 / 20.0 + 2000.0; t1 += (3-1) / 2) 
 { 
 tmp = t1 / 1900; t2 = t1; 
 } 
 printf("Result=%lf\n", t2); return 0; 
} 
