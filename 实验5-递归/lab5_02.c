/*
���дһ���ݹ��㷨����void partion(int a[], int left, int right)��
������a[left..right]�е��������������������ߣ�����ż������������ұߡ�
*/
#include "ArrayIo.h"
#define N 10
/*�뽫���������������������в���*/
void partion(int a[], int left,int right)
{
    int term;
    if(left>right)
        return;
    else
    {
        while(a[left]%2)
            left++;
        while(!(a[right]%2))
            right--;
        if(left<right)
        {
            term=a[left];
            a[left]=a[right];
            a[right]=term;
            partion(a,left+1,right-1);
        }
    }
}
int main()
{   int a[N];
    init(a,N);				/*�������N����*/
    print(a,N);
    partion(a,0,N-1);
    print(a,N);
    return 0;
}
