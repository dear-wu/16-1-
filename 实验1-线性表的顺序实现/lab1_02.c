/**********************************/
/*�ļ����ƣ�lab1_02.c             */
/**********************************/

/*��дһ���㷨����void sprit( sequence_list *L1,sequence_list *L2,sequence_list *L3)��
��˳���L1�е����ݽ��з��࣬������ŵ��浽˳���L2�У�ż���浽˳���L3�У���дmain()���в��ԡ�
*/

#include "sequlist.h"
/*�뽫���������������������в���*/
void sprit(sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int i,j=0,k=0;
    initseqlist(L2);
    initseqlist(L3);
    for(i=0;i<L1->size;i++)
    {
        if(L1->a[i]%2!=0)
        {
            L2->a[j]=L1->a[i];
            j++;
            L2->size=j;
        }
        else
        {
            L3->a[k]=L1->a[i];
            k++;
            L3->size=k;
        }
    }
}
int main()
{   sequence_list L1,L2,L3;		/*��������˳���*/
    input(&L1);				    /*����L1*/
    sprit(&L1,&L2,&L3);		    /*��L1���з���*/
    print(&L1);				    /*���L1��L2��L3*/
    print(&L2);
    print(&L3);
}

