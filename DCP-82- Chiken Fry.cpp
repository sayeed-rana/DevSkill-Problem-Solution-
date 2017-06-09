#include<iostream>
using namespace std;
int main()
{
    int num,tc,i,j;
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        if(num>=120)
        {
            cout<<"Good Boy Sifat\n";
        }
        else
            cout<<"Naughty Boy Sifat\n";
    }
    return 0;
}

