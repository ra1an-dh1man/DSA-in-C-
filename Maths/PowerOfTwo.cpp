#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    bool res = false;
    for(int i = 0; i <= 30 ; i++)
    {
        if(pow(2,i) == n)
            res = true;
    }
    if(res == true)
        cout<<"true";
    else
        cout<<"false";
return 0;
    
}
