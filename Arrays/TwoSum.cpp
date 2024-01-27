/*
    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    Example 2:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    Example 3:

    Input: nums = [3,3], target = 6
    Output: [0,1]

 */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    for(int i = 0 ; i < n ; i++)
    {
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[i] + arr[j] == target)
                {
                    cout<< "["<< i << ", " << j << "]";
                    return 0;
                }

            }
    }

    cout<<"No Combination available";
return 0;
}
