#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int **mang= new int* [100]();
    for(int i=0;i<100;i++)
    {
        mang[i]=new int [100]();
    }
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            cout<<mang[i][j]<<" ";
        }
        cout<<endl;
    }
}
