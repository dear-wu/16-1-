/*
�ַ������ô�ͷ��������洢������㷨����void delstring(linkstring s, int i,int len)
���ַ���s��ɾ���ӵ�i��λ�ÿ�ʼ������Ϊlen���Ӵ���
*/
/**********************************/
/*�ļ����ƣ�lab4_05.c                 */
/**********************************/
#include "linkstring.h"
/*�뽫���������������������в���*/
void delstring(linkstring  s, int i, int len)
{
    linkstring p,k,pre;
    int j=0,m;
    pre=NULL;
    p=s->next;
    k=p;
    for(m=0;m<len-1;m++)
    {
        k=k->next;
    }
    while(k && p && j!=i-1)
    {
        pre=p;p=p->next;k=k->next;j++;
    }
    if(!k)
    {
        printf("i��k��ƥ��\n");
        return;
    }
    if(!p)
    {
        printf("i�����ַ�������\n");
        return;
    }
    if(!pre)
    {
         s->next=k->next;
         return;
    }
    pre->next=k->next;
    return;
}
int main()
{   linkstring str;
    str=creat();            /*���ַ�������*/
    print(str);
    delstring(str,2,3);     /*���ԣ��ӵ�2��λ��ɾ������Ϊ3���Ӵ�,�����й��첻ͬ�Ĳ�������  */
    print(str);               /*���*/
    delList(str);
    return 0;
}
