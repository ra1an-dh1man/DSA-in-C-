#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int len = 0;
    for(int i = 0 ; arr[i] != '\0'; i++)
    {
        len++;
    }

return len;

}

void getReverse(char arr[], int len)
{
    for(int i = len - 1; i >= 0; i--)
    {
       cout<<arr[i];
    }
}

int main()
{
    char arr[20];

    cin>>arr;

    int res = getLength(arr);
    
    char arr2[20];

    getReverse(arr, res);

}
