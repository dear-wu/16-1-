/*
�����ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  insert(linklist head ,datatype x)
{
    linklist pre,p,s;
    p=head->next;
    pre=NULL;
    s=(linklist)malloc(sizeof(node));
    s->info=x;
    while(p && p->info<x)
    {
        pre=p; p=p->next;
    }
    if(!p)
    {
        s->next=NULL;
        pre->next=s;
    }
    else
    {
        if(!pre)
        {
            s->next=p;
            head->next=s;
        }
        else
        {
            s->next=p;
            pre->next=s;
        }
    }
    return;
}
int main()
{   datatype x;
    linklist head;
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    insert(head,x);				    /*�������ֵ���뵽��ͷ���ĵ������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
