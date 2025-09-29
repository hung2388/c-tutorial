#include <iostream>
#include <algorithm>
using namespace std;
bool func(int a,int b)
{
    return (a%10<b%10);
}
int main()
{
    int A[5];
    int len=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
        sort(A,A+len,func);
    for(int i=0;i<len;i++)
    {
        cout<<A[i]<<" ";
    }

}

