#include<stdio.h>

int main()
{
for(int i=0;i<45/3;i++)
for(int j=0;j<45/2;j++)
{
int m=45-i-j;
if(i*3+j*2+m/2==45&&m%2==0)
printf("����%d�� Ů��%d�� С��%d��\n",i,j,m);
}
	return 0;
}

