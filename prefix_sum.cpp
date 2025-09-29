#include <iostream>
using namespace std;


int main()
{
    int a;
    cin>>a;
    long long *A=new long long [a+1]();
    long long *P=new long long [a+1];
    P[0]=0;
    for(int i=1;i<=a;i++)
    {
        cin>>A[i];
        P[i]=P[i-1]+A[i];
    }
    int loop; cin>>loop;


    for(int i=0;i<loop;i++)
    {
        int x,y;
        cin>>x>>y;
        long long sum=P[y]-P[x-1];
        cout<<sum<<endl;
    }
}
