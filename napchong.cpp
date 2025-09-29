#include <iostream>
struct toado
{
    int x,y;
};
bool operator ==(const toado &a1,const toado &a2)
{
    return (a1.x==a2.x&&a1.y==a2.y);
}
bool operator !=(const toado &a1,const toado &a2)
{
    return !(a1==a2);
}
using namespace std;
int main()
{
    toado a,b;
    cin>>a.x>>a.y>>b.x>>b.y;
    cout<<a.x<<a.y<<b.x<<b.y<<endl;
    if(a==b) cout<<"a=b"<<endl;
    else if(a!=b) cout<<"a!=b"<<endl;
}
