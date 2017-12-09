/*
���������������ʽ��ʽ�洢��tΪ�����㣬��дһ������int Depth(bintree t, char x)����ֵΪx�Ľ���ڶ������еĲ�Ρ�
*/
#include "bintree.h"
char *a="ABC##D##EF#G###";  		/*�������������t��ǰ������*/

typedef struct knode
{
    bintree stack[100];
    int mark[100];
}stacknode;

/*
 	����Depth�����ܣ�����x���ڵĲ��
*/
int Depth(bintree t,char x)
{
    int top=0;
    stacknode k;
    while(t || top!=0)
    {
        if(t)
        {
            k.stack[top]=t;
            k.mark[top]=0;
            top++;
            t=t->lchild;
        }
        else
        {
            if(k.mark[top-1]==1)
            {
                top--;
                t=k.stack[top];
                if(t->data==x)
                    return top+1;
                t=NULL;
            }
            else
            {
                t=k.stack[top-1];
                k.mark[top-1]=1;
                t=t->rchild;
            }
        }

    }
    return 0;
}


int main()
{
    bintree root;
    char x;
    int k=0;
    root=creatbintree();
    printf("���������е�1�����ֵ��\n");
    scanf("%c",&x);
   k=Depth(root,x);
   printf("%c���Ĳ��Ϊ%d\n",x,k);

}
