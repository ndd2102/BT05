#include<iostream>
using namespace std;
int lamtron(double a)
{
    if(a- (int)a >= 0.5)
        return (int)a +1;
    else return (int)a;
}
int main()
{
    double a;
    cin >> a;
    cout << lamtron(a);
}
