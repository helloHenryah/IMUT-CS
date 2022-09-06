/* main.c */ 
#include <stdio.h>
#include <stdlib.h>
#include "def1.h"
extern void function2();
extern void function3(); 
int main() 
{ 
function2(); 
function3(); 
printf("This is main.\n");
exit (EXIT_SUCCESS); 
} 
