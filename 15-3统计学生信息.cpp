#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
#define LEN sizeof (struct stu)

struct stu
{
	char num[100];
	char name[50];
	char sex[3];
	char age[100];
	char score[100];
	char adre[50];
	struct stu *next;//最好全部都用字符数组，而且数组不能太小，否则会wa
};
struct stu *creat(void)
{
	struct stu *p1,*p2,*head;
	head=NULL;
	int i=0;
	p1=(struct stu*)malloc(LEN);
	while(1)
	{
		i++;
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0)
			break;
		else
		{
            scanf("%s",p1->name);
		    scanf("%s",p1->sex);
		    scanf("%s",p1->age);
		    scanf("%s",p1->score);
		    scanf("%s",p1->adre);
			p1->next=NULL;
			if(head==NULL)
				head=p1;
			else
			    p2->next=p1;
		    p2=p1;
			p1=(struct stu*)malloc(LEN);
		}
	}
	return head;
}
struct stu *swap(struct stu *head)
{
	struct stu *p,*q,*t;
	p=head;
	q=NULL;
	while(p!=NULL)
	{
		t=p->next;
		p->next=q;
		q=p;
		p=t;
	}
	return q;
}//这个函数就是单项链表逆转函数
void print(struct stu *p)
{
	struct stu *p1;
	p1=p;
	while(p1!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->adre);
		p1=p1->next;
	}
}
int main()
{   
	struct stu *p,*head;
	head=creat();
	p=swap(head);
	print(p);
	return 0;
}