/*
   �Ա�дһ����������һ�ø��������������н���������Ů������
*/
#include "bintree.h"
char *a="ABC##D##EF#G###";  		/*�������������t��ǰ������*/
/*�뽫���������������������в���*/
void change(bintree t)
{
    bintree a;
    if(!t->lchild && !t->rchild)
        return;
    else
    {
        a=t->lchild;
        t->lchild=t->rchild;
        t->rchild=a;
        if(t->lchild)
            change(t->lchild);
        if(t->rchild)
            change(t->rchild);
    }
}
int main()
{  bintree root;
   root=creatbintree();
   change(root);
   preorder(root);
}
