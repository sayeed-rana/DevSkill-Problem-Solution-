#include<iostream>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        if(num==29 || num==30)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
