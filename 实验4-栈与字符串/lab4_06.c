/*
�ַ������ô�ͷ��������洢����д����linkstring index(linkstring s, linkstring t)��
�����Ӵ�t������s�е�һ�γ��ֵ�λ�ã���ƥ�䲻�ɹ����򷵻�NULL��
*/

#include "linkstring.h"
/*�뽫���������������������в���*/
linkstring index(linkstring  s, linkstring t)
{
    linkstring p,q,m,n,pre;
    int flag=1;
    pre=s;
    p=s->next;
    q=t->next;
    m=p;n=q;
    while(m && flag)
    {
        p=m;
        q=n;
        if(p->data==q->data)
        {
            flag=0;
            while(q)
            {
                if(p->data!=q->data)
                {
                    flag=1;break;
                }
                p=p->next;
                q=q->next;
            }
        }
        pre=m;
        m=m->next;
    }
    if(pre==s)    return s->next;
    if(!pre)   return 0;
    else      return pre;
}
int main()
{   linkstring s,t,p=NULL;
    s=creat();                  /*������������*/
    t=creat();			        /*�����Ӵ�����*/
    print(s);
    print(t);
    p=index(s,t);
    if(p)
            printf("ƥ��ɹ����״�ƥ��ɹ���λ�ý��ֵΪ%c\n",p->data);
    else
            printf("ƥ�䲻�ɹ���\n");
    delList(s);
    delList(t);
    return 0;
}
