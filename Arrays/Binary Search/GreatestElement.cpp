/*
    Program to find the greatest element in an " Mountain Array ".

    input -> {1, 2, 3, 4, 5, 6, 1}
    output -> 5
*/
#include<iostream>
using namespace std;

int Solution(int arr[], int n)
{
    int s = 0; 
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while(s < e)
    {
        if(arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;

        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    
    cout<< Solution(arr, n);
return 0;
}
