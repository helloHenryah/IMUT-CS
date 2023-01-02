#include<stdio.h>
int fun(int a,int n);
int main()
{
int a,n,sum=0;
scanf("%d %d",&a,&n);
for(int i=1;i<=n;i++) 
{
	sum+=fun(a,i);
}
printf("%d",sum);
	return 0;
}
int fun(int a,int n)
{
	int sum=a;
	for(int i=1;i<n;i++)
	sum=sum*10+a;
	return sum;
}
