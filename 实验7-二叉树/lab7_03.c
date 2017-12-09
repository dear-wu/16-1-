/*
编写函数bintree prelist(bintree t)，bintree postfirst(bintree t)，
分别返回二叉树t在前序遍历下的最后一个结点地址和后序遍历下的第一个结点地址。
*/

#include "bintree.h"
char *a="ABC##D##EF#G###";  /*扩充二叉树序树t的前序序列*/
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
    t=creatbintree();   	/*建立二叉树t的存储结构*/
    p=prelast(t);
	q=postfirst(t);
	if (t!=NULL)
            {   printf("前序遍历最后一个结点为：%c\n",p->data);
			    printf("后序遍历第一个结点为：%c\n",q->data);
            }
	 else	printf("二叉树为空！");
    return 0;
}


