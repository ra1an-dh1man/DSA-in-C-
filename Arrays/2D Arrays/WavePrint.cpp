/*
  input->  2
           2
           1 2
           3 4
  output-> 1 3 4 2
*/
#include<iostream>
using namespace std;

int main()
{
    int r;
    cin>>r;

    int c;
    cin>>c;

    int arr[r][c];

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < c; i++)
    {
        if(i & 1)
        {
            for(int j = r - 1 ; j >= 0 ; j--)
            {
                cout<<arr[j][i] <<" ";
            }
        }
        else
        {
            for(int j = 0 ; j < r; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        
    }
}
