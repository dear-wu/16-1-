/***************************************************/
/*          Dijkstra��Դ���·���㷨               */
/***************************************************/
#include "ljjz.h"   /*�����ڽӾ��󴴽�����*/
typedef enum{FALSE,TRUE} boolean;/*falseΪ0,trueΪ1*/
typedef int dist[M];  /* ������������*/
typedef int path[M];  /* ·������*/

/*�������ܣ�Dijkstra�㷨��ⵥԴ���·��
����������ͼ���ڽӾ���g;Դ��v0;·������p����������d
*/
void dijkstra(Mgraph g,int v0,path p,dist d)
 { boolean final[M]; /*��ʾ��ǰԪ���Ƿ���������·��*/
   int i,k,j,v,min,x;

   /*  ��1��  ��ʼ������S���������d */
    for(i=0;i<g.n;i++)
    {
        final[i]=FALSE;
        d[i]=g.edges[v0][i];
        if(d[i]<FINITY && d[i]!=0)
            p[i]=v0;
        else
            p[i]=-1;
    }
    final[v0]=TRUE;
   /* ��2��  �����ҳ�n-1��������S��   */
    for(i=0;i<g.n;i++)
    {
        min=FINITY;
        for(j=0;j<g.n;j++)
        {
            if(!final[j] && d[j]<min)
            {
                k=j;
                min=d[j];
            }
        }
        if(min==FINITY) return;
        final[k]=TRUE;
        /*��3�� �޸�S��V-S�и����ľ���*/
        for(j=0;j<g.n;j++)
        if(!final[j] && g.edges[k][j]+d[k]<d[j])
        {
            d[j]=g.edges[k][j]+d[k];
            p[j]=k;
        }
    }
}
/*�������ܣ��������ͼ�����·��
�����������ڽӾ���g��·������p����������d
*/
void print_gpd(Mgraph g,path p,dist d)
 {
   int st[M],i,pre,top=-1;
   for (i=0;i<g.n;i++)
    { printf("\nDistancd: %7d , path:" ,d[i]);
      st[++top]=i;
      pre=p[i];
      while (pre!=-1)   /*�ӵ�i�����㿪ʼ��ǰ�������·���ϵĶ���*/
        { st[++top]=pre;
          pre=p[pre];
         }
      while (top>0)
     printf("%2d",st[top--]);
    }
 }
/*---------- ������ ------------*/
int main()
 { Mgraph g;   /* ����ͼ */
   path p;     /* ·������ */
   dist d;     /* ���·������ */
   int v0;
   creat(&g,"g21.txt",1); /*����ͼ8.21��ʾ��������G21�������ļ�Ϊg21.txt */
   print(g);        /*���ͼ���ڽӾ���*/
   printf("\n");
   printf("������Դ���ţ�");
   scanf("%d",&v0);       /*����Դ��*/
   dijkstra(g,v0,p,d);   /*��v0�������������̾���*/
   /*���V0�����������·����Ϣ������*/
   print_gpd(g,p,d);

    return 0;
  }
