/*
���費��ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab2_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist insert(linklist head ,datatype x)
{
    linklist p,pre,s;
    pre=NULL;
    p=head;
    s=(linklist)malloc(sizeof(node));
    s->info=x;
    while(p && p->info<x)
    {
        pre=p;p=p->next;
    }
    if(p && pre==NULL)
    {
        s->next=p;
        p=s;
        head=p;
    }
    if(p && pre!=NULL)
    {
        s->next=p;
        pre->next=s;
    }
    if(!p)
    {
        pre->next=s;
        s->next=NULL;
    }
    return head;
}
int main()
{   datatype x;
    linklist head;
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨����������*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    head=insert(head,x);				/*�������ֵ���뵽�������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
