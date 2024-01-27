/*
    Input: nums = [1,2,3,1,1,3]
    Output: 4
    Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

 */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i < n ; i++)
    {
        cin>>arr[i];
    }

    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
    }
    cout<<count;

return 0;

}
