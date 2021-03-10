#include<iostream>
using namespace std;
int UCLN(int a, int b)
{
    for(int i = 0; a*b != 0; i++)
    {
        if(a > b) a = a%b;
        else b = b%a;
    }
    return a+b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << UCLN(a,b) << endl;
    if(UCLN(a,b) == 1) cout << " 2 so nguyen to cung nhau";
}
