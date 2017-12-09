/*
   ����������ָ�뷽ʽ�ĺ��ӱ�ʾ����ʾ���Ա�дһ���ǵݹ麯��void PostOrder1(tree t)��ʵ�����ĺ�������㷨��
*/

#include "tree.h"
void PostOrder1(tree root)
{
    tree treeStack[MAXLEN];
    tree overStack[MAXLEN];
    int top1=-1,top2=-1,i;

    if(root)
        treeStack[++top1]=root;
    while(top1!=-1)
    {
        root=treeStack[top1--];
        for(i=0;i<m;i++)
        {
            if(root->child[i])
                treeStack[++top1]=root->child[i];
        }
        overStack[++top2]=root;
    }
    while(top2!=-1)
        printf("%c",overStack[top2--]->data);
}
int main ()
{
    tree root;
    printf("please input the preorder sequence of the tree:\n");
	root =createtree();
	printf("���������ǣ�\n");
	PostOrder1(root);
	return 0;
}

