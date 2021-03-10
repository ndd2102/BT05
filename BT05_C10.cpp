#include<iostream>
#include<cmath>
using namespace std;
void tong (int *a, int n)
{
    for(int i = 0 ; i < n ; i++)
        for(int j = i + 1; j < n; j ++)
            for(int k = j + 1; k < n; k ++)
    {
        if( (a[i] + a[j] + a[k]) % 25 == 0)
            cout << a[i] << ' ' << a[j] << ' '<< a[k] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ; i ++)
       a[i] = rand()% (49 - 0 + 1) + 0;
     for(int i = 0 ; i < n ; i ++)
         cout << a[i] << ' ' ;
        cout << endl;
     tong(a, n);
}
