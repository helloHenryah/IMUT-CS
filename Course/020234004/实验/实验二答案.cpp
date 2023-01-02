#include<stdio.h>
#include<stdlib.h>
struct student {
	int id;
	char name[10];
	int score[3];
	double average;
	struct student *next; 
};


struct student *head;
void insertf(struct student *head);//插入函数
void deletef(struct student *head);//删除函数
void findf(struct student *head);//查找函数
void printff(struct student *head);//输出函数

int main()
{
char c=0;
head=(struct student*)malloc(sizeof(struct student));
head->next=NULL;
while(c!='q')
{
if(c!=10)
{
printf("请输入\n1：插入学生信息\n2：删除学生信息\n");
printf("3：查找学生信息\n4：输出学生信息\n");
}
scanf("%c",&c);
if(c=='1') 
insertf(head);
else if(c=='2')
deletef(head);
else if(c=='3')
findf(head);
else if(c=='4')
printff(head);
}
	return 0;
}

void insertf(struct student *head){
	student *pb=head;
	student	*s=(struct student*)malloc(sizeof(struct student));
			s->average=0;
			s->next=NULL;
			printf("学号：");
			scanf("%d",&s->id);
			printf("名字：");
			scanf("%s",s->name);
			printf("成绩：");
			for(int i=0;i<3;i++)
			{
			scanf("%d",&s->score[i]);
			s->average+=s->score[i];
			}
			s->average=s->average*1.0/3;
			{
			while(pb->next!=NULL)
			pb=pb->next;
			pb->next=s;
			}
		
}

void deletef(struct student *head)
{
	struct student *pb,*pa=head;
	int n;
	printf("请输入删除学生学号：");
	scanf("%d",&n);
	while(1)
	{
		if(pa->id==n){
			pb->next=pa->next;
			free(pa);
			break;
		}
		if(pa->next==NULL)
		{printf("未找到\n"); 
		break;}
		pb=pa;
		pa=pa->next;		
	}	
}
void findf(struct student *head)
{
	struct student *pa=head;
	int n;
	printf("请输入查找学生学号：");
	scanf("%d",&n);
	while(1)
	{
		if(pa->id==n)
		{
		printf("学号：%d 姓名：%s",pa->id,pa->name);
		printf(" 平均成绩：%.1lf\n",pa->average);
		break;
		}
		if(pa->next==NULL)
		{printf("未找到\n");
		break;}
		pa=pa->next;
	}
}

void printff(struct student *head)
{
	struct student *pc=head;
		for(pc=head->next;pc;pc=pc->next)
		{
		printf("学号：%d 姓名：%s",pc->id,pc->name);
		printf(" 平均成绩：%.1lf\n",pc->average);
		}
}
