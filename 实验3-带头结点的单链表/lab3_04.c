/*
��д�㷨����void  delallx(linklist head, int x)��ɾ����ͷ��㵥����head������ֵΪx�Ľ�㡣
*/
/**********************************/
/*�ļ����ƣ�lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  delallx(linklist head,int x)
{
     linklist pre,p;
    pre=NULL;
    p=head->next;
    while(1)
    {
        while(p && p->info!=x)
        {
            pre=p; p=p->next;
        }
        if(!p)  return;
        else
        {
            if(!pre)
            {
                    head->next=p->next;
                    free(p);
                    p=head->next;
            }
            else
            {
                pre->next=p->next;
                free(p);
                p=pre->next;
            }
        }
    }

    return;

}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
