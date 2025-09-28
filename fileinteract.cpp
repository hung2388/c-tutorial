#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputstream;
    ofstream outputstream;
    inputstream.open("input.txt");
    outputstream.open("output.txt");
    int so1,so2,so3;
    inputstream>>so1>>so2>>so3;
    outputstream<<"tong 3 so dau la"<<(so1+so2+so3)<<endl;
    inputstream.close();
    outputstream.close();
}
