#include <iostream>
using namespace std;
struct ps
{
    int x,y;
};
ostream& operator<<(ostream& outStream,const ps& phanso)
{
    cout<<phanso.x<<"/"<<phanso.y;
    return outStream;
}
int main()
{
    ps a,b;
    cin>>a.x>>a.y>>b.x>>b.y;
    cout<<a<<b;
}
