/*
��д�㷨����void levelbintree(bintree t)��ʵ�ֶ������Ĳ�α�����
*/

#include "bintree.h"
char *a="ABC##D#E##F##";  			/*�������������t��ǰ������*/
void levelbintree(bintree t)
{
    bintree quene[N];
    int font,rear;
    font=rear=0;
    quene[font]=t;
    rear=font;
    while(font<=rear)
    {
        printf("%c",t->data);
        if(t->lchild)
            quene[++rear]=t->lchild;
        if(t->rchild)
            quene[++rear]=t->rchild;
        t=quene[++font];
    }
}
int main()
{   bintree t;
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/
    printf("�������Ĳ������Ϊ��\n");
    levelbintree(t);       /*��α���������*/
    return 0;
}
