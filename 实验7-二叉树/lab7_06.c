/*
�Ա�дһ���ݹ麯��bintree buildBintree(char *pre, char *mid, int length)��
���ݶ�������ǰ������pre����������mid��ǰ�����г���length������������Ķ�������洢�ṹ��
�������ض�������������ַ��
*/

#include "bintree.h"
#include <string.h>
char *a="";
/*�뽫���������������������в���*/
bintree buildBintree(char *pre, char *mid,int length)
{
    bintree x;
    int i=0;
    if(length)
    {
        x=(bintree)malloc(sizeof(binnode));
        x->data=pre[0];
        while(i<length && mid[i]!=x->data)
            i++;
        x->lchild=buildBintree(pre+1,mid,i);
        x->rchild=buildBintree(pre+i+1,mid+i+1,length-1-i);
        return x;
    }
    else return NULL;
}
int main()
{   bintree root;
    char pre[100],mid[100];
    puts("������ǰ�����У�");
    gets(pre);
    puts("�������������У�");
    gets(mid);
    root=buildBintree(pre,mid,strlen(pre));
    puts("���������ǣ�");
    postorder(root);
}

