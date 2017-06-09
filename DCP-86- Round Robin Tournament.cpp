#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        unsigned long long int num,result;
        cin>>num;
        result=((num-1)*(num)/2);
        cout<<"Case "<<i<<": "<<result<<"\n";
    }
    return 0;
}
