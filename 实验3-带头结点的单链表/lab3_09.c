/*
编写一个程序，用尽可能快的方法返回带头结点单链表中倒数第k个结点的地址，如果不存在，则返回NULL。
*/
/**********************************/
/*文件名称：lab3_09.c             */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
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
     head=creatbyqueue();        /*尾插法建立带头结点的单链表*/
     print(head);                  /*输出单链表head*/
     printf("k=");
     scanf("%d",&k);
     p=search(head,k);
     if (p) printf("%d\n",p->info);
     else
         printf("超出链表长度！\n");
     delList(head);
     return 0;
}
