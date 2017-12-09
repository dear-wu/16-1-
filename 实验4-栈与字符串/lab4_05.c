/*
字符串采用带头结点的链表存储，设计算法函数void delstring(linkstring s, int i,int len)
在字符串s中删除从第i个位置开始，长度为len的子串。
*/
/**********************************/
/*文件名称：lab4_05.c                 */
/**********************************/
#include "linkstring.h"
/*请将本函数补充完整，并进行测试*/
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
        printf("i与k不匹配\n");
        return;
    }
    if(!p)
    {
        printf("i超出字符串长度\n");
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
    str=creat();            /*建字符串链表*/
    print(str);
    delstring(str,2,3);     /*测试，从第2个位置删除长度为3的子串,请自行构造不同的测试用例  */
    print(str);               /*输出*/
    delList(str);
    return 0;
}
