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

    int max = -1;
    int row = -1;

    for(int i = 0 ; i < r ; i++)
    {
        int sum = 0;
        for(int j = 0 ; j < c ; j++)
        {
            sum = sum + arr[i][j];
        }

        if(max < sum)
        {   
            max = sum;
            row++;
        }
        
    }

    cout<<"In "<< row << " row the sum is Largest as compare to other rows.";
}
