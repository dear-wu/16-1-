/*
��дһ�������þ����ܿ�ķ������ش�ͷ��㵥�����е�����k�����ĵ�ַ����������ڣ��򷵻�NULL��
*/
/**********************************/
/*�ļ����ƣ�lab3_09.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist   search(linklist head,int k)
{
    linklist pre,p,q;
    int i=0;
    q=head->next;
    while(q)
    {
        i++; q=q->next;
    }
    if(k<=i)
    {
        p=head->next;
        pre=p;
        for(i=0;i<k;i++)
            p=p->next;
        while(p)
        {
            pre=pre->next;
            p=p->next;
        }
        return pre;
    }
    else    return NULL;
}
int main()
{
     int k;
     linklist head,p;
     head=creatbyqueue();        /*β�巨������ͷ���ĵ�����*/
     print(head);                  /*���������head*/
     printf("k=");
     scanf("%d",&k);
     p=search(head,k);
     if (p) printf("%d\n",p->info);
     else
         printf("���������ȣ�\n");
     delList(head);
     return 0;
}
