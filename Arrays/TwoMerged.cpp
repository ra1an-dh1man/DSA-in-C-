/*
    Program to take input two sorted array and print the third sorted array which
    formed by merging the two arryas.

    input ->5
            1 3 5 7 9
            3
            2 4 6
    output->1 2 3 4 5 6 7 9  
*/
#include<iostream>
using namespace std;

void getMerge(int arr1[], int a1, int arr2[], int a2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < a1 && j < a2)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while(i < a1)
        arr3[k++] = arr1[i++];
    while(j < a2)
        arr3[k++] = arr2[j++];
   
}

int main()
{
    int a1;
    int a2;

    cin>>a1;
    int arr1[a1];
    for(int i = 0 ; i < a1; i++)
    {
        cin>>arr1[i];
    }

    cin>>a2;
    int arr2[a2];
    for(int i = 0 ; i < a2; i++)
    {
        cin>>arr2[i];
    }

    int arr3[a1 + a2];
    getMerge(arr1, a1, arr2, a2, arr3);
    for(int i = 0 ; i < a1 + a2 ; i++)
    {
        cout<<arr3[i] << " ";
    }

}
