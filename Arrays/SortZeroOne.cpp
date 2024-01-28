/*
    input -> {0, 1, 0, 1, 0, 1}
    output -> {0, 0, 0, 0, 1, 1, 1}

    condition -> elements provided must be 0s and 1s. 
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

        if(arr[i] != 0 && arr[i] != 1)
        {
            cout<<"Please enter either 1 or 0";
            return 1;
        }

    }

    int i = 0, j = n-1;

    while(i <= j)
    {
        if(arr[i] == 0)
            i++;
        
        else if(arr[j] == 1)
            j--;

        else if(arr[i] == 1 && arr[j] == 0)
        {
                swap(arr[i],arr[j]);
                i++;
                j--;
        }

        
    }
    for(int k = 0 ; k < n ; k++)
        {
            cout<<arr[k]<<" ";
        }
return 0;
}
