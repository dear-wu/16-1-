/*
  ��д�ݹ��㷨int max(int a[],int left, int right)��������a[left..right]�е��������
*/

#include "ArrayIo.h"
/*�뽫���������������������в���*/
int max(int a[],int left,int right)
{
    int mid,m,n;
    mid=(left+right)/2;
    if(left>=right)
        return a[left];
    else
    {
        m=max(a,left,mid);
        n=max(a,mid+1,right);
        return m>n ? m:n;
    }
}
int main()
{   int a[10];
    input(a,10);
    print(a,10);
    printf("������������:%d\n",max(a,0,9));
    return 0;
}
