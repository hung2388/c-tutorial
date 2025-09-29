#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
string tong(string A,string B,string result)
{
    while(A.length()<B.length()) A='0'+A;
    while(B.length()<A.length()) B='0'+B;
    int index=0,carry=0;
    int i=A.length()-1;
    while(i>=0||carry>0)
    {
        int x=A[i]-'0';
        int y=B[i]-'0';
        int sum=x+y+carry;
        result.push_back(sum%10+'0');
        carry=sum/10;
        i--;
    }
    reverse(result.begin(),result.end());
    return result;
}

int main()
{
    string A,B,result;
    cin>>A>>B;
    cout<<tong(A,B,result);
}
