/*
��д�㷨����linklist delallx(linklist head, int x)��ɾ������ͷ��㵥����head������ֵΪx�Ľ�㡣
*/
/**********************************/
/*�ļ����ƣ�lab2_04.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist delallx(linklist head,int x)
{
    linklist p,pre;
    p=head;
    pre=NULL;
    while(1)
    {
        while(p && p->info!=x)
        {
            pre=p;p=p->next;
        }
        if(!p)  break;
        else
        {
            if(!pre)
            {
                head=head->next;
                p=head;
            }
            else
            {
                pre->next=p->next;
                free(p);
                p=pre->next;
            }
        }
    }
    return head;
}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*β���뷨����������*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    head=delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
