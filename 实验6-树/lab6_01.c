/*
��д�㷨����void levelorder(tree t)ʵ�����Ĳ�α�����
*/

#include "tree.h"
typedef struct node1
{
    tree position;
    struct node1 *next;
}linknode;
typedef linknode *linklist;

void levelorder(tree t)    /* tΪָ����������ָ��*/
{
    linklist front,rear,s,q;
    int i;
    tree p;
    front=rear=NULL;
    if(!t)  return;
    s=(linklist)malloc(sizeof(linknode));
    s->position=t;
    s->next=NULL;
    front=rear=s;
    while(front)
    {
       p=front->position;
       printf("%c",p->data);
       for(i=0;i<m;i++)
            if(p->child[i])
            {
                s=(linklist)malloc(sizeof(linknode));
                s->position=p->child[i];
                s->next=rear->next;
                rear->next=s;
                rear=s;
            }
       front=front->next;
    }
}

 int main()
 {
   tree t;
   printf("please input the preorder sequence of the tree:\n");
   t=createtree();
   printf("\nthe levelorder is:");
   levelorder(t);
   return 0;
 }
