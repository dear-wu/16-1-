/*
利用朴素模式匹配算法，将模式t在主串s中所有出现的位置存储在带头结点的单链表中。
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node
{		int data;
		struct node *next;
}linknode;
typedef linknode *linklist;
/*朴素模式匹配算法,返回t中s中第一次出现的位置，没找到则返回-1，请将程序补充完整*/
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
/*利用朴素模式匹配算法，将模式t在s中所有出现的位置存储在带头结点的单链表中,请将函数补充完整*/
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
/*输出带头结点的单链表*/
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
	printf("请输入主串:\n");
	gets(s);
	printf("请输入模式串:\n");
	gets(t);
	int k=index(s,t);
	printf("k=%d",k);
	head=indexall(s,t);
	printf("\n[ %s ]在[ %s ]中的位置有：\n",t,s);
	print(head);
    return 0;
}

