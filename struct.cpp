#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct sinhvien
{
    double diem;
    int mssv;
    string ten;
};
int main()
{
    sinhvien sv[100];
    for(int i=0;i<5;i++)
    {
        cin>>sv[i].mssv; cin>>sv[i].ten; cin>>sv[i].diem;
    }
    for(int i=0;i<5;i++)
    {
        cout<<sv[i].ten<<" "<<sv[i].diem<<endl;
    }

}
