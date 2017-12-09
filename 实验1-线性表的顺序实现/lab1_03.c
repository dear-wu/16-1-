/*��֪˳���L1��L2��������С�����������þ����ܿ�ķ�����L1��L2�е����ݺϲ���L3�У�ʹ������L3�а��������С�*/

#include "sequlist.h"
/*�뽫���������������������в���*/
void merge(sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int i=0,j=0,k=0;
    initseqlist(L3);
    while(i<L1->size  &&  j<L2->size)
    {
        if(L1->a[i]<=L2->a[j])
        {
            L3->a[k++]=L1->a[i];
            i++;
        }
        else
        {
            L3->a[k++]=L2->a[j];
            j++;
        }
    }
    while(i<L1->size)
        L3->a[k++]=L1->a[i++];
    while(j<L1->size)
        L3->a[k++]=L2->a[j++];
    L3->size=k;
}
int main()
{
    sequence_list L1,L2,L3;
    input(&L1);				/*����ʱ��������������*/
    input(&L2);				/*����ʱ��������������*/
    merge(&L1,&L2,&L3);		/*�ϲ����ݵ�L3*/
    print(&L3);				/*���L3*/
}
