/**********************************/
/*�ļ����ƣ�lab2_02.c                 */
/**********************************/
/*
�������Ա�a1,a2,a3,��an�����ò���ͷ���ĵ�����洢��
������㷨����linklist reverse1(linklist  head)��
void reverse2(linklist *head)������ͷ���ĵ�����head�͵ص��ã�
ʹ���ɣ�an,an-1,��a3.a2,a1��������������������в��ԡ�
*/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist reverse1(linklist head)
{
    linklist p,s;
    p=head;
    head=NULL;
    while(p)
    {
        s=p;
        p=p->next;
        s->next=head;
        head=s;
    }
    return head;
}
void reverse2(linklist *head)
{
    linklist p,s;
    p=*head;
    *head=NULL;
    while(p)
    {
        s=p;
        p=p->next;
        s->next=*head;
        *head=s;
    }
    return;
}

int main()
{   datatype x;
    linklist head;
    head=creatbystack();		/*ͷ���뷨����������*/
    print(head);				/*���ԭ����*/
    head= reverse1(head);		/*���õ�����*/
    print(head);				/*������ú������*/
    reverse2(&head);			/*���õ�����*/
    print(head);
    delList(head);
    return 0;
}
