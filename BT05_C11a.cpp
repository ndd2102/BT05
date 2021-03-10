#include <iostream>
using namespace std;
void ChuyenHeCoSo(int n)
{
    int a[100], x = 0;
    for(int i = 0 ; n>0; i++)
    {
        a[i] = n % 2;
        n = n/2;
        x++;
    }
    for(int i = x - 1 ; i >= 0; i--)
       cout << a[i];

}
int main()
{
   int n;
   cin >> n;
   ChuyenHeCoSo(n);
}
