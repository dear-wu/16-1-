/*
编写算法函数void  delallx(linklist head, int x)，删除带头结点单链表head中所有值为x的结点。
*/
/**********************************/
/*文件名称：lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*请将本函数补充完整，并进行测试*/
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
    head=creatbyqueue();				/*尾插入法建立带头结点的单链表*/
    print(head);
    printf("请输入要删除的值：");
    scanf("%d",&x);
    delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
