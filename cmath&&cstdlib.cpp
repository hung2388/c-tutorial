#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    double x=sqrt(24);
    double y=pow(3,2);
    int a=100,b=123;
    int z=a+rand()%(b-a+1);
    cout<<x<<" "<<y<<" "<<z<<endl;
}

