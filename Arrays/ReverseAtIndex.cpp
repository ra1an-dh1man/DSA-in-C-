/*
    program to written reverse of an array after the index provided by the user.

    input -> 6
             1 2 3 4 5 6
             3
    output ->1 2 3 4 6 5 
*/
#include<iostream>
using namespace std;

void getReverse(int arr[], int n, int idx)
{    
    int s = idx + 1;
    int e = n - 1;

    while(s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    } 
}
int main()
{
    int n;
    cin>>n;

    int arr[n] ;

    for(int i = 0 ;i < n ; i++)
    {
        cin>>arr[i] ;
    }

    int idx ;
    cin>>idx;

    getReverse(arr, n, idx);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i] << " ";
    }
}
