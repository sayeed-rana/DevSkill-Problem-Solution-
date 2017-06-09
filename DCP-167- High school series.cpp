#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int j=1;j<=tc;j++)
    {
        int num=0,sum=0;
        cin>>num;
        for(int i=1;i<=num;i++)
        {
            sum=sum+pow(i,3);
        }
        cout<<"Case "<<j<<": "<<sum<<"\n";
    }
    return 0;
}
