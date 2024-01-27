/* 
    Input: nums = [12,345,2,6,7896]
    Output: 2
    Explanation: 
    12 contains 2 digits (even number of digits). 
    345 contains 3 digits (odd number of digits). 
    2 contains 1 digit (odd number of digits). 
    6 contains 1 digit (odd number of digits). 
    7896 contains 4 digits (even number of digits). 
    Therefore only 12 and 7896 contain an even number of digits.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    int tcount = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        int count = 0 ;
        while(arr[i] != 0 )
        {
            arr[i] = arr[i] / 10;
            count++;  
        }
        if(count % 2 == 0)
            tcount++;
          
    }
    cout<<tcount << " ";
return 0;    
}
