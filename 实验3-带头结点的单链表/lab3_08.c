/*
���дһ���㷨����void partion(linklist head)��
����ͷ���ĵ�����head�е�����ֵΪ�����Ľ�����
�������ǰ�棬����ֵΪż���Ľ�����������ĺ��档
*/

/**********************************/
/*�ļ����ƣ�lab3_08.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void partion(linklist head)
{
    linklist p,s,q,pre;
    p=head->next;
    head->next=NULL;
    q=head;
    s=p;
    p=p->next;
    q->next=s;
    q=s;
    while(p)
    {
        s=p;
        p=p->next;
        if(s->info%2==0)
            {q->next=s; q=s;}
        else
        {
            s->next=head->next;
            head->next=s;
        }
    }
    q->next=NULL;
    return;
}
int main()
{        linklist head;
         head=creatbyqueue();           /*β�巨������ͷ���ĵ�����*/
         print(head);                   /*���������head*/
         partion(head);
         print(head);
         delList(head);
         return 0;
}
