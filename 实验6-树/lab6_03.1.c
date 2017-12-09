#include "tree.h"
typedef struct node1
{
    tree strack[100];
    int mark[100];
}linknode;
void PostOrder1(tree root)
{
    linknode k;
    int top=0;
    tree t;
    t=root;
    while(t || top!=0)
    {
        if(t)
        {
            k.strack[top]=t;
            k.mark[top]=0;
            top++;
            t=t->child[0];
        }
        else
        {
            if(k.mark[top-1]==0)
            {
                t=k.strack[top-1];
                k.mark[top-1]=1;
                t=t->child[1];
            }
            else
            {
                if(k.mark[top-1]==1)
                {
                    t=k.strack[top-1];
                    k.mark[top-1]=2;
                    t=t->child[2];
                }
                else
                {
                    t=k.strack[top-1];
                    printf("%c",t->data);
                    top--;
                    t=NULL;
                }
            }
        }
    }
}
int main ()
{
    tree root;
    printf("please input the preorder sequence of the tree:\n");
	root =createtree();
	printf("∫Û–Ú–Ú¡–Œ™£∫\n");
	PostOrder1(root);
	return 0;
}
