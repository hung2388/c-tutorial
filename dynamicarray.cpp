#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *A= new int[n]();
    /*for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }*/
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    delete []A;
}

