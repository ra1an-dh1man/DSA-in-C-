/*
  input = {1, 2, 3, 4}
  output = {2, 1, 4, 3}
*/
#include<iostream>
using namespace std;
void swapArray(int arr[], int n)
{
    for(int i = 0 ; i < n; i=i+2)
    {
        if(i+1 < n)
        {
            swap(arr[i], arr[i+1]);
          /*
          ---------how swap working----------
          ------------------------------------
              for(int i = 0 ; i < n ; i=i+2)
              {
                  int temp = arr[i];
                  arr[i] = arr[i+1];
                  arr[i+1] = temp;
              }
          ------------------------------------    
          */ 
        }
    }
}

void show(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];;

    for(int i = 0 ; i <  n ; i++)
    {
        cin>>arr[i];
    }

    swapArray(arr, n);
    show(arr, n);
return 0;
}
