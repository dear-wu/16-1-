/**********************************/
/*�ļ����ƣ�lab1-01.c             */
/**********************************/
/*����sequlist.h�ж����˳�����д�㷨����reverse(sequence_list *L)��ʵ��˳���ľ͵ص��á�*/
#include "sequlist.h"
/*�뽫���������������������в���*/
void reverse(sequence_list *L)
{
    int i=0,j=L->size-1;
    datatype temp;
        while(i<j)
        {
            temp=L->a[i];
            L->a[i]=L->a[j];
            L->a[j]=temp;
            i++;
            j--;
        }
}
int main()
{
    sequence_list L;			/*����˳���*/
    input(&L);	        		/*�����������*/
    print(&L);                  /*���ԭ��*/
    reverse(&L);		            /*˳�����*/
    print(&L);                  /*����±�*/
}
