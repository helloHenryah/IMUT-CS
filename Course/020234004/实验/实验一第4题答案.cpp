#include<stdio.h>

int main()
{
int m,n,l=1;
scanf("%d %d",&m,&n);
int min=m<n?m:n;
for(int i=1;i<=min;i++)
if(m%i==0&&n%i==0)
l=i;
printf("���Լ����%d\n",l);
printf("��С��������%d\n",m*n/l);
	return 0;
}

