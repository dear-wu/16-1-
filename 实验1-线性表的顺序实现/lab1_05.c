/*
���дһ���㷨����partion(sequence_list *L)�������ܿ�ؽ�˳���L�е��������������������ߣ�
����ż������������ұߣ��������㷨��ʱ�临�Ӷȡ�
*/
/**********************************/
/*�ļ����ƣ�lab1_05.c                 */
/**********************************/
#include "sequlist.h"
/*�뽫���������������������в���*/
void partion(sequence_list *L)
{
    int i=0,j=L->size-1;
    datatype temp;
    while(i<=j)
    {
        while(L->a[i]%2!=0)
            i++;
        while(L->a[j]%2==0)
            j--;
        if(i<=j)
        {
            temp=L->a[i];
            L->a[i]=L->a[j];
            L->a[j]=temp;
        }
    }
}
int main()
{
  sequence_list L;
  inputfromfile(&L,"3.txt");
  print(&L);  						/*�����L*/
  partion(&L);
  print(&L);  						/*����±�*/
  return 0;
}
