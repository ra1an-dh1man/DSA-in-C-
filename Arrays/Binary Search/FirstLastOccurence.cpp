/*
    Program to find the First and Last occurence of the of an element in a sorted array

    intput -> {1, 2, 3, 3, 4}
    output -> 2
              3  
*/
#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    int res = 0;

    while (s <= e)
    {
        if(key == arr[mid])
        {    res = mid;
            e = mid - 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        
        mid = s + ( e - s) / 2;
    }
    return res;
}

int lastOccur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    int res = 0;

    while (s <= e)
    {
        if(key == arr[mid])
        {    res = mid;
             s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        
        mid = s + ( e - s) / 2;
    }
    return res;
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
    int key;
    cin>>key;

    cout<<firstOccur(arr, n, key)<<endl<<lastOccur(arr, n, key);
return 0;
}
