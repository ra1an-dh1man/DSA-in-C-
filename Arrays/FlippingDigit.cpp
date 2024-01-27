/* 
    Input: image = [[1,1,0],[1,0,1],[0,0,0]]
    Output: [[1,0,0],[0,1,0],[1,1,1]]
    Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
    Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
*/

#include<iostream>
using namespace std;

int main()
{
    int r;
    int c;
    cin>>r>>c;

    int arr[r][c];

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = c-1 ; j >= 0 ; j--)
        {
            if(arr[i][j] == 1)
                arr[i][j] = 0;
            else
                arr[i][j] = 1;

            cout<<arr[i][j] << " ";
        }
    }

   
}
