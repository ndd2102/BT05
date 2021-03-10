#include<iostream>
using namespace std;
int kt(int n)
{
    int count = 0;
    for(int i = 2; i < n /2 ; i++)
    {
        if(n % i == 0)
            count ++;
    }
    if(count > 0 || n == 1) return 0;
    else return 1;

}
int main()
{
    int n;
    cin >> n;
    cout << kt(n);
}
