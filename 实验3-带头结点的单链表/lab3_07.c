/*
���һ���㷨linklist interSection(linklist L1,linklist L2)��
�������������ʾ�ļ���L1��L2�Ľ��������������һ���µĴ�ͷ
���ĵ������沢���ر�ͷ��ַ��
*/
/**********************************/
/*�ļ����ƣ�lab3_07.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist   interSection(linklist L1, linklist L2)
{
    linklist p,q,r,k,pre;
    p=L1->next;
    k=L2->next;
    L2->next=NULL;
    r=L2;
    while(p)
    {
        q=k;
        pre=NULL;
        while(q && q->info!=p->info)
            {pre=q;q=q->next;}
        if(q)
        {
            if(!pre)
                k=k->next;
            else
                pre->next=q->next;
            q->next=r->next;
            r->next=q;
            r=q;
        }
        p=p->next;
    }
    return L2;
}
int main()
{
 linklist h1,h2,h3;
 h1=creatbyqueue();           /*β�巨����������,����ʱ���������ظ�����*/
 h2=creatbyqueue();
 print(h1);                   /*���������h1*/
 print(h2);
 h3=interSection(h1,h2);      /* ��h1��h2�Ľ���*/
 print(h3);
 delList(h1);
 delList(h3);
 return 0;
}
