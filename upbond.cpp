#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool func(int a,int b)
{
    return (a%10<b%10);
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
        vector <int> A(n);
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    string cmd;
    while(cin>>cmd)
    {
        if(cmd=="#") break;
        if(cmd=="NEXT")
        {
            int k;cin>>k;
            auto it = upper_bound(A.begin(),A.end(),k);
            if(it==A.end()) cout<<-1<<endl;
            else
            cout<<*it<<endl;
        }
    }
}
