#include <stdio.h>
#include <stdlib.h>
int sosanh(const void *a,const void *b)
{
    int x=*(const int*)a;
    int y=*(const int*)b;
        return x-y;
}

int main()
{
    int a,re;
    scanf("%d %d",&a,&re);
    int A[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    qsort(A,a,sizeof(int),sosanh);
    int count=0;
    int i=0,j=a-1;
    while(i<j)
    {
        if(A[i]+A[j]==re)
        {
            count++;i++;j--;
        }
        else if(A[i]+A[j]>re)
        {
            j--;
        }
        else{
            i++;
        }
    }
    printf("%d",count);
}
