#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int prod = 1;

    while(n != 0)
    {
        int num = n % 10;
        sum = sum + num;
        prod = prod * num;

        n = n / 10;
    }

    int ans = prod - sum;
    cout<<ans;
}
