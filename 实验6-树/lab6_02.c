/*
假设树采用指针方式的孩子表示法表示，试编写一个非递归函数void PreOrder1(tree root)，实现树的前序遍历算法。
*/
#include "tree.h"
typedef struct node1
{
    tree position;
    struct node1 *next;
}linknode;
typedef linknode *linklist;

void  PreOrder1(tree root)
{
    linklist top,s,q;
    int i;
    tree p=root;
    if(!root)    return;
    top=NULL;
    printf("%c",p->data);
    while(p->child[0] || top)
    {
        if(p->child[0])
        {
            printf("%c",p->child[0]->data);
            for(i=m-1;i>=1;i--)
            {
                if(p->child[i])
                {
                    s=(linklist)malloc(sizeof(linknode));
                    s->position=p->child[i];
                    s->next=top;
                    top=s;
                }
            }
            p=p->child[0];
        }
        else
        {
            p=top->position;
            printf("%c",p->data);
            q=top->next;
            free(top);
            top=q;
        }
    }
}
int main ()
{
        tree root;
        printf("please input the preorder sequence of the tree:\n");
		root =createtree();
		printf("前序序列是：\n");
		PreOrder1(root);
		return 0;
}
