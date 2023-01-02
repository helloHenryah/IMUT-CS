#include<stdio.h>
#include<math.h>
void fn(int n);
int main()
{
for(int i=100;i<=200;i++)
fn(i);
	return 0;
}
void fn(int n)
{
	int l=0;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	{
	l=1;break;
	}
	if(l==0)
	printf("%5d",n);
}
