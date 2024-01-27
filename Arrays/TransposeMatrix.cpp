/*
    Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
    Output: [[1,4,7],[2,5,8],[3,6,9]]

 */
#include<iostream>
using namespace std;
int main()
{
    int r,c;

    cin>>r>>c;

    int arr[r][c];

    for(int i = 0 ; i < r; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            cin>>arr[i][j];
        }
    }

    int transpose[r][c];

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            transpose[i][j] = arr[j][i] ;
            cout<<transpose[i][j];
        }
        cout<<endl;
    }


return 0;
}
