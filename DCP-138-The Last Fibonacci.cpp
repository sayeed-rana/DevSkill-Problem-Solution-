#include<iostream>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        ll n;
        cin>>n;
        ll sum[100000],ss=0;
        cout<<"Case "<<i<<": ";
        if(n==0)
        {
           cout<<"0 is the last digit.\n";
        }
        else if(n==1 || n==2)
        {
            cout<<"1 is the last digit.\n";
        }
        else
        {
           sum[0]={0};
           sum[1]={1};
           sum[2]={1};
           for(int k=3;k<=n;k++)
           {
               sum[k]=sum[k-1]+sum[k-2];
           }
           ll result=sum[n-1]+sum[n-2];
           if(result>=10)
           {
            while(result/10)
           {
               ss=result%10;
              ll rr=result/10;
              result=rr;
           }
            cout<<ss<<" is the last digit.\n";
           }
           else
             cout<<result<<" is the last digit.\n";
        }


    }
    return 0;
}
