/*��д����slnklist delx(linklist head, datatype x)��ɾ������ͷ��㵥����head�е�һ��ֵΪx �Ľ�㡣
����������������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab2_01.c             */
/**********************************/

#include "slnklist.h"
/*�뽫���������������������в���*/
linklist delx(linklist head,datatype x)
{
    linklist pre=NULL,p;
    p=head;
    while(p && p->info!=x)
    {
        pre=p;  p=p->next;
    }
    if(p)
    {
        if(!pre)    head=p->next;
        else    pre->next=p->next;
    }
    else
    {
        printf("���޴���\n");
        return NULL;
    }
    return head;
}

int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();		/*β���뷨����������*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    head=delx(head,x);			/*ɾ��������ĵ�һ��ֵΪx�Ľ��*/
    print(head);
    delList(head);				/*�ͷŵ�����ռ�*/
    return 0;
}
