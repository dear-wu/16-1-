/*
����������ָ�뷽ʽ�ĺ��ӱ�ʾ���洢�ṹ���Ա�дһ������tree Ct(char s[])��
����������������ű�ʾ�ַ���s���������Ĵ洢�ṹ�����磬��Ҫ�����̲�ͼ6.4��ʾ������
Ӧ����A��B��E��F��,C,D��G��I��J��K��,H��������˵����tree.h�ж���ĳ���m��ʾ������
��ȣ�����ݽ�������Ҫ�����޸�m��ֵ��

*/

#include "tree.h"
/*�뽫���������������������в���*/
tree Ct(char s[MAXLEN])
{
    tree stack[50];
    tree root,p,q;
    int i,j,top=-1,k=0,flag=1;
    p=(tree)malloc(sizeof(node));
    p->data=s[k];
    k++;
    for(i=0;i<m;i++)
        p->child[i]=NULL;
    root=p;
    while(flag)
    {
        if(s[k]=='(')
        {
            stack[++top]=p;
            k++;
        }
        else if (s[k]==')')
                {
                    top--;
                    if(top==-1)
                        flag=0;
                    else k++;
                }
                else
                {
                    if (s[k]==',')
                          k++;
                    else
                        {
                            p=(tree)malloc(sizeof(node));
                            p->data=s[k];
                            for(i=0;i<m;i++)
                                p->child[i]=NULL;
                            i=0;
                            q=stack[top];
                            while(q->child[i]!=NULL)
                                i++;
                            q->child[i]=p;
                            k++;
                        }
                }
    }
    return root;
}

int main ()
{
    char s[MAXLEN];
	tree root = NULL;
	printf ("�����������ű�ʾ������һ����:\n");
	scanf ("%s",s);
	root = Ct(s);
	preorder(root);  /*ǰ�������*/
	return 0;
}
