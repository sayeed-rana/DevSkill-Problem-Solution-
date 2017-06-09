#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int x=abs(x2-x1);
        int y=abs(y2-y1);
        cout<<"Case "<<i<<": "<<x+y<<"\n";
    }
    return 0;
}
