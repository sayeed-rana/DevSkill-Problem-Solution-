#include<bits/stdc++.h>
using namespace std;


string s;
int n;
bool check()
{
    int i,j;
    for(i=0,j=n-1;i<=n/2;i++,j--)
    {
        if(s[i]!=s[j]) return 0;
    }
    return 1;
}


int main()
{
    int i,j,k,m,d,test,t=0;
    cin>>test;
    getchar();
    while(test--)
    {
        getline(cin,s);
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
        if(check()) puts("Yes");
        else puts("No");
        s.clear();
    }
    return 0;
}
