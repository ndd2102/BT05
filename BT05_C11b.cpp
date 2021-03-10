#include<iostream>
#include<cmath>
using namespace std;
int ChuyenHeCoSo(int n)
{
    int a[100], x = 0, m = 0;
    for(int i = 0 ; n > 0 ; i++)
    {
        a[i] = n % 10;
        n = n/10;
        x++;
    }
    for(int i = x - 1; i >=0 ; i --)
    {
        if(a[i] == 1)
            m += pow(2,i);
    }
    return m;
}
int main()
{
    int n;
    cin >> n;
    cout << ChuyenHeCoSo(n);
}
