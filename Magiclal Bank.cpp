#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,coin,i;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        cin>>coin;
        if(coin==1)
        {
          cout<<coin<<"\n";
        }
        else
        cout<<coin-1<<"\n";
    }
    return 0;
}
