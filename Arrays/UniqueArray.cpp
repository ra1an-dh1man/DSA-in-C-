/*
    input = {2, 3, 1, 6, 3, 6, 2}
    output = 1

    Assumption -> all the elements of the array must be present twice except one element.
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

    

    for(int i = 0 ; i < n ; i++)
    {   int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            
            if(arr[i] == arr[j])
                count++;

           
        }
        if(count == 1)
            {
                cout<<arr[i];
                return 0;
            }
    }
return 0;
}
