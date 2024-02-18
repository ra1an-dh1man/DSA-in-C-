#include<iostream>
#include<string>
using namespace std;

int getBinary(string str, char key)
{
    int s = 0;
    int e = str.size() - 1;
    int mid = s + (e - s) / 2;

    while(s<=e)
    {
        if(str[mid] == key)
            return mid;
        else if(key < str[mid])
            e = mid - 1;
        else
            s = mid + 1;

        mid = s + (e - s)/2;
    }

return -1;
}
int main()
{
    
    string str;
    cin>>str;

    char key;
    cin>>key;

    cout<<getBinary(str, key);

}
