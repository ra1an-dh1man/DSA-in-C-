/*
  input -> my name is
  output ->ym eman si
*/ 
#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int count = 0;

    for(int i = 0 ; arr[i] != '\0' ;i++)
    {
        count++;
    }

    return count;
}

void getReverse(char arr[], int s, int e)
{
    for(int i = e; i >=s;i--)
    {
        cout<<arr[i];
    }
}
int main()
{
    char arr[100];
    cin.getline(arr,100);

    int len = getLength(arr);
    
    int s =0;

    for(int i= 0 ; i <= len;i++)
    {
        if(arr[i] == '\0' || arr[i] == ' ')
        {
            int e = i - 1;
            getReverse(arr, s, e);
            s = i + 1;
            
            if(arr[i] == ' ')
                cout<<' '; 
        }
    }
}
