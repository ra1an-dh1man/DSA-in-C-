#include<iostream>
#include<climits>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int ans = 0;

  while(n != 0)
  {
    int num = n % 10;
    if((ans < INT_MIN / 10) && ans > INT_MAX)
        return 1;

    ans = ans * 10 + num;

    n = n / 10;
  }

  cout<<ans;
  
}
