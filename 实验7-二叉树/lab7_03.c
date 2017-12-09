/*
��д����bintree prelist(bintree t)��bintree postfirst(bintree t)��
�ֱ𷵻ض�����t��ǰ������µ����һ������ַ�ͺ�������µĵ�һ������ַ��
*/

#include "bintree.h"
char *a="ABC##D##EF#G###";  /*�������������t��ǰ������*/
bintree prelast(bintree t)
{
    while(t->lchild || t->rchild)
    {
        if(t->rchild)
            t=t->rchild;
        else
            t=t->lchild;
    }
    return t;
}
bintree postfirst(bintree t)
{
    while(t->lchild || t->rchild)
    {
        if(t->lchild)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return t;
}
bintree midfirst(bintree t)
{
    while(t && t->lchild)
            t=t->lchild;
    return t;
}
bintree midlast(bintree t)
{
    while(t && t->rchild)
            t=t->rchild;
    return t;
}
int main()
{   bintree t,p,q;
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/
    p=prelast(t);
	q=postfirst(t);
	if (t!=NULL)
            {   printf("ǰ��������һ�����Ϊ��%c\n",p->data);
			    printf("���������һ�����Ϊ��%c\n",q->data);
            }
	 else	printf("������Ϊ�գ�");
    return 0;
}


