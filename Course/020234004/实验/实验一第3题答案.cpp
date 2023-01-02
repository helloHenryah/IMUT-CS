#include<stdio.h>
void fun(int n);
int main()
{
int m,n;
scanf("%d %d",&m,&n);
for(int i=m;i<=n;i++)
	fun(i);
	return 0;
}
void fun(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	if(n%i==0)
	sum+=i;
	if(sum==n)
	printf("%d\n",n);
}
