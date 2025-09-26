#include <iostream>
bool chiahet(int a,int b)
{
    bool result=0;
    result=(a%b==0||b%a==0);
    return result;
}
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<" "<<chiahet(a,b)<<endl;
}
