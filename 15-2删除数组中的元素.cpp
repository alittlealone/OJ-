#include<stdio.h>
struct stu
{
   int num;
   struct stu *next;
};
void creat(struct stu *head,int i)
{
    struct stu *p;
    head->next=NULL;
    while(i--)
	{
        p=new stu;
        scanf("%d",&p->num);
        p->next=head->next;
        head->next=p;
        head=p;
	}
}

void dele(struct stu *head,int k)
{
    struct stu *p=head;
    head=head->next;

    while(head!=NULL)
	{
        if(head->num==k)
		{
            p->next=head->next;
            head=p->next;

		}
        else
		{
            p=p->next;
            head=head->next;
		}
	}

}
void print(struct stu *head)
{
    head=head->next;
    while(head!=NULL)
	{
        printf("%d ",head->num);
        head=head->next;
	}
    printf("\n");
}
int main()
{
    int n;
    int k;
    stu *head=new stu;
    scanf("%d",&n);
    creat(head,n);
	scanf("%d",&k);
    dele(head,k);
    print(head);
	return 0;
}