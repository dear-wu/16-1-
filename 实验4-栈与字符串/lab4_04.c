/*
��֪�ַ������ô�������ʽ�洢�ṹ�����linksrting.h�ļ�����
���д����linkstring substring(linkstring s,int i,int len)��
���ַ���s�дӵ�i��λ����ȡ����Ϊlen���Ӵ������������Ӵ�����
*/

#include "linkstring.h"
/*�뽫���������������������в���*/
linkstring substring(linkstring  s, int i, int len)
{
    linkstring p,q,k;
    int j=0,m;
    q=(linkstring*)malloc(sizeof(linknode));
    p=s->next;
    k=p;
    for(m=0;m<len-1;m++)
    {
        k=k->next;
    }
    while(k && p && j!=i-1)
    {
        p=p->next;k=k->next;j++;
    }
    if(!k)
    {
        printf("i��k��ƥ��\n");
        return 0;
    }
    if(!p)
    {
        printf("i�����ַ�������\n");
        return 0;
    }
    q->next=p;
    k->next=NULL;
    return q;
}
int main()
{   linkstring str1,str2;
    str1=creat();                  /*���ַ�������*/
    print(str1);
    str2=substring(str1,3,2);    /*���ԣ��ӵ�3��λ�ÿ�ʼȡ����Ϊ5���Ӵ�,�����й��첻ͬ��������*/
    print(str2);                   /*����Ӵ�*/
    delList(str1);
    delList(str2);
    return 0;
}
