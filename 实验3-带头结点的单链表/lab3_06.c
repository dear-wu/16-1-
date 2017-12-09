/*
��֪������ͷ���ĵ�����L1��L2�еĽ��ֵ���Ѱ�������������㷨����
linklist mergeAscend (linklist L1,linklist L2)��L1��L2�ϲ���һ�������
��ͷ�ᵥ������Ϊ�����ķ��ؽ����
����㷨����linklist mergeDescend (linklist L1,linklist L2)
��L1��L2�ϲ���һ������Ĵ�ͷ�ᵥ������Ϊ�����ķ��ؽ����
�����main()�������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_06.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist mergeAscend(linklist L1,linklist L2)
{
    linklist p,q,s,r;
    p=L1->next;
    q=L2->next;
    L2->next=NULL;
    r=L2;
    while(p && q)
    {
        if(p->info<=q->info)
        {
            s=p;
            p=p->next;
        }
        else
        {
            s=q;
            q=q->next;
        }
        r->next=s;
        r=s;
    }
    if(!p)  r->next=q;
    if(!q)  r->next=p;
    return L2;

}
linklist mergeDescend(linklist L1,linklist L2)
{
    linklist p,q,s,r;
    p=L1->next;
    q=L2->next;
    L2->next=NULL;
    r=L2;
    while(p && q)
    {
        if(p->info<=q->info)
        {
            s=p;
            p=p->next;
        }
        else
        {
            s=q;
            q=q->next;
        }
        s->next=r->next;
        r->next=s;
    }
    if(!p)
    {
        while(q)
        {
            s=q;    q=q->next;
            s->next=r->next;
            r->next=s;
        }
    }
    if(!q)
    {
        while(p)
        {
            s=p;    p=p->next;
            s->next=r->next;
            r->next=s;
        }
    }
    return L2;
}
int main()
{       linklist h1,h2,h3;
         h1=creatbyqueue();     /*β�巨����������,��������������*/
         h2=creatbyqueue();
         print(h1);
         print(h2);
        h3=mergeAscend(h1,h2);/*����ϲ���h3*/
            /*����ϲ������h3=mergeDescend(h1,h2); */
         //h3=mergeDescend(h1,h2);
         print(h3);
         delList(h3);
         return 0;
}
