/*
��������ģʽƥ���㷨����ģʽt������s�����г��ֵ�λ�ô洢�ڴ�ͷ���ĵ������С�
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node
{		int data;
		struct node *next;
}linknode;
typedef linknode *linklist;
/*����ģʽƥ���㷨,����t��s�е�һ�γ��ֵ�λ�ã�û�ҵ��򷵻�-1���뽫���򲹳�����*/
int index(char *s,char *t)
{
    int i,j,flag=1;
    int im,jm;
    i=0;
    im=strlen(s);
    jm=strlen(t);
    while(i<=im-jm && flag)
    {
        j=0;
        flag=0;
        while(j<jm && !flag)
        {
            if(t[j] == s[i+j])
            {
                j++;
            }

            else
            {
                flag=1;
            }
        }
        ++i;
    }
    if(!flag)
    {
        return i-1;
    }
    else

    {
        return -1;
    }
}
/*��������ģʽƥ���㷨����ģʽt��s�����г��ֵ�λ�ô洢�ڴ�ͷ���ĵ�������,�뽫������������*/
linklist indexall(char *s,char *t)
{
    linklist head,q,p;
    head=(linklist)malloc(sizeof(linklist));
    head->next=NULL;
    p=head;
    int i,j,flag;
    int im,jm;
    i=0;
    im=strlen(s);
    jm=strlen(t);
    while(i<=im-jm)
    {
        j=0;
        flag=1;
        while(j<jm && flag)
        {
            if(t[j] == s[i+j])
            {
                j++;
            }

            else
            {
                flag=0;
            }
        }
        if(flag)
        {
            q=(linklist)malloc(sizeof(linklist));
            q->data=i;
            q->next=p->next;
            p->next=q;
            p=q;
        }
        ++i;
    }
    return head;

}
/*�����ͷ���ĵ�����*/
void print(linklist head)
{	linklist p;
	p=head->next;
	while(p)
	{	printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{	char s[80],t[80];
	linklist head;
	printf("����������:\n");
	gets(s);
	printf("������ģʽ��:\n");
	gets(t);
	int k=index(s,t);
	printf("k=%d",k);
	head=indexall(s,t);
	printf("\n[ %s ]��[ %s ]�е�λ���У�\n",t,s);
	print(head);
    return 0;
}

