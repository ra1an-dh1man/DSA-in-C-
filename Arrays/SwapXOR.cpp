/*
  output -> 30
            20
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 30;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<a<<endl<<b;
}
