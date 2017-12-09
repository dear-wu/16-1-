/*********************************************/
/*           Prim求解最小生成树算法          */
/*********************************************/
#include "ljjz.h"

typedef struct edgedata  /*用于保存最小生成树的边类型定义*/
       { int beg,en;     /*beg,en是边顶点序号*/
         int length;     /*边长*/
       }edge;

/*函数功能：prim算法构造最小生成树
函数参数：图的邻接矩阵g;边向量edge
*/
void prim(Mgraph g, edge tree[M-1])
{  edge x;
   int i,min,j,k,v;

   /* 建立初始入选点，并初始化生成树边集tree*/
    v=0;
    for(i=1;i<g.n;i++)
    {
        tree[i-1].beg=v;
        tree[i-1].en=i;
        tree[i-1].length=g.edges[v][i];
    }

    for(i=0;i<g.n-2;i++)
    {
        /*依次求当前(第k条）最小两栖边，并加入TE*/
        min=tree[i].length;
        k=i;
        for(j=i+1;j<g.n-1;j++)
            if(tree[j].length<=min)
            {
                min=tree[j].length;
                k=j;
            }
        v=tree[k].en;
        x=tree[i];
        tree[i]=tree[k];
        tree[k]=x;
            /*由于新顶点v的加入，修改两栖边的基本信息*/

        for(j=i+1;j<g.n-1;j++)
        {
            if(g.edges[v][tree[j].en]<tree[j].length)
            {
                tree[j].beg=v;
                tree[j].length=g.edges[v][tree[j].en];
            }
        }
    }

   /*输出最小生成树*/
    printf("\n最小生成树是:\n");/*输出最小生成树*/
    for (j=0;j<=g.n-2;j++)
        printf("\n%c---%c  %d\n",g.vexs[tree[j].beg],g.vexs[tree[j].en],tree[j].length);
    printf("\n最小生成树的根是： %c\n", g.vexs[0]);
 }

int  main()
  {
   Mgraph g;
   edge  tree[M-1];  /*用于存放最小生成树的M-1条边*/
   creat(&g,"g.txt",0);  /*创建无向图的邻接矩阵*/
   prim(g,tree);        /*求解图的最小生成树*/
   return 0;

  }

