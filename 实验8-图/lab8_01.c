/*
��д����������ڽӱ�Ϊ�洢�ṹ������ͼ�ĸ�����Ķȡ�
*/
/**********************************/
/*�ļ����ƣ�lab8_01.c                 */
/**********************************/
#include "ljb.h"
/* ������ڽӱ�Ϊ�洢�ṹ������ͼg�ĸ�����Ķ� */
void degree(LinkedGraph g)
{
    int i,count;
    EdgeNode * p;
    for(i=0;i<g.n;i++)
    {
        count=0;
        p=g.adjlist[i].FirstEdge;
        while(p)
        {
            count++;
            p=p->next;
        }
        printf("V%d=%d\n",i,count);
    }
}
int main()
{ LinkedGraph g;
  creat(&g,"g11.txt",0);  	/*��֪g11.txt�д洢��ͼ����Ϣ*/
  printf("\n The graph is:\n");
  print(g);
  degree(g);
  return 0;
}
