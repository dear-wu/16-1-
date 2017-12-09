/*
  ��д����ģʽƥ��KMP�㷨���뽫��غ�������������
*/
#define maxsize 100
typedef struct{
      char str[maxsize];
      int length ;
} seqstring;
/*��ģʽp��next[]ֵ���뽫������������*/
void getnext(seqstring p,int next[])
{
    int i,j;
    next[0]=-1;i=0;j=-1;
    while(i<p.length)
    {
        if(j==-1 || p.str[i]==p.str[j])
        {
            ++i;++j;
            next[i]=j;
        }
        else    j=next[j];
    }
}
/*����ģʽƥ���㷨���뽫������������*/
int kmp(seqstring t,seqstring p,int next[])
{
    int i=0,j=0;
    while (  i<t.length && j<p.length  )
    { if  (  j==-1|| t.str[i]==p.str[j]  )
             {i++; j++;}
      else  j=next[j];
    }
  if (j==p.length) return (i-p.length);
  else return(-1);
}
int  main()
 {   seqstring t, p;
     int next[maxsize],pos;
     printf("������������\n");
     gets(t.str);
     t.length=strlen(t.str);
     printf("������ģʽ����\n");
     gets(p.str);
     p.length=strlen(p.str);
     getnext(p,next);
     pos=kmp(t,p,next);
     printf("\n");
     printf("%d",pos);
     return 0;
}

