/*
    Example 1:

    Input: gain = [-5,1,5,0,-7]
    Output:   0 -5 -4 1 1 -6
              1
    Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
    
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i = 0 ;i < n ; i++)
    {
        cin>>arr1[i];
    }
  
    int arr2[n+1];

    arr2[0] = 0;

    int max = arr2[0];

    for(int i = 0 ; i < n+1 ; i ++)
    {
        arr2[i+1] = arr2[i] + arr1[i];
        if(arr2[i] > max)
            max = arr2[i];        
        cout<<arr2[i]<<" ";
    }
    cout<<endl<<max;
return 0;

}
