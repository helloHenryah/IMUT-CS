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
void insertf(struct student *head);//���뺯��
void deletef(struct student *head);//ɾ������
void findf(struct student *head);//���Һ���
void printff(struct student *head);//�������

int main()
{
char c=0;
head=(struct student*)malloc(sizeof(struct student));
head->next=NULL;
while(c!='q')
{
if(c!=10)
{
printf("������\n1������ѧ����Ϣ\n2��ɾ��ѧ����Ϣ\n");
printf("3������ѧ����Ϣ\n4�����ѧ����Ϣ\n");
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
			printf("ѧ�ţ�");
			scanf("%d",&s->id);
			printf("���֣�");
			scanf("%s",s->name);
			printf("�ɼ���");
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
	printf("������ɾ��ѧ��ѧ�ţ�");
	scanf("%d",&n);
	while(1)
	{
		if(pa->id==n){
			pb->next=pa->next;
			free(pa);
			break;
		}
		if(pa->next==NULL)
		{printf("δ�ҵ�\n"); 
		break;}
		pb=pa;
		pa=pa->next;		
	}	
}
void findf(struct student *head)
{
	struct student *pa=head;
	int n;
	printf("���������ѧ��ѧ�ţ�");
	scanf("%d",&n);
	while(1)
	{
		if(pa->id==n)
		{
		printf("ѧ�ţ�%d ������%s",pa->id,pa->name);
		printf(" ƽ���ɼ���%.1lf\n",pa->average);
		break;
		}
		if(pa->next==NULL)
		{printf("δ�ҵ�\n");
		break;}
		pa=pa->next;
	}
}

void printff(struct student *head)
{
	struct student *pc=head;
		for(pc=head->next;pc;pc=pc->next)
		{
		printf("ѧ�ţ�%d ������%s",pc->id,pc->name);
		printf(" ƽ���ɼ���%.1lf\n",pc->average);
		}
}
