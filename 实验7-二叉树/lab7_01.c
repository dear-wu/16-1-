/*

��д�㷨����void preorder1(bintree t)ʵ�ֶ�����t�ķǵݹ�ǰ�������

*/

#include "bintree.h"
char *a="ABC##D#E##F##";  /*�������������t��ǰ������*/

/*����preorder1()�Ĺ����Ƿǵݹ�ǰ�����������t���뽫����������������������*/
void preorder1(bintree t)
{
    linklist top,s;
    top=NULL;
    while(t || top)
    {
        if(t)
        {
            printf("%c",t->data);
            if(t->rchild)
                {
                    s=(linklist)malloc(sizeof(linknode));
                    s->tree=t->rchild;
                    s->next=top;
                    top=s;
                }
            t=t->lchild;
        }
        else
        {
            t=top->tree;
            top=top->next;
        }
    }
}
int main()
{   bintree t;
    t=creatbintree();   /*����������t�Ĵ洢�ṹ*/
    printf("��������ǰ������Ϊ��\n");
    preorder1(t);       /*ǰ��ǵݹ����������*/
    return 0;
}
