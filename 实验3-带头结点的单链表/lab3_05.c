/*
��֪���Ա�洢�ڴ�ͷ���ĵ�����head�У�������㷨����void sort(linklist head)����head�еĽ�㰴���ֵ�������С�
*/
/**********************************/
/*�ļ����ƣ�lab3_05.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  sort(linklist head)
{
    linklist s,p,q,pre;
    p=head->next;
    head->next=NULL;
    while(p)
    {
        s=p;
        pre=NULL;
        q=head->next;
        p=p->next;
        while(q && q->info<s->info)
        {
            pre=q;  q=q->next;
        }
        if(!q && !pre)
        {
            head->next=s;    s->next=NULL;
        }
        if(!q && pre)
        {
            pre->next=s;
            s->next=NULL;
        }
        if(q && !pre)
        {
            s->next=q;
            head->next=s;
        }
        if(q && pre)
        {
            s->next=q;
            pre->next=s;
        }
    }
    return;
}
int main()
{        linklist head;
         head=creatbyqueue();   		/*β�巨������ͷ���ĵ�����*/
         print(head);    			    /*���������head*/
         sort(head);     				/*����*/
         print(head);
         delList(head);
         return 0;
}
