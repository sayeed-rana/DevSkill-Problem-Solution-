#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t=1;
    int n;
    cin>>n;
    double d[n],corno[n];
    double s[n],r[n];
    while(t<=n)
    {
    cin>>r[t];
    cin>>s[t];
    d[t]=floor(2*r[t]);
    corno[t]=floor(s[t]*sqrt(2));
    t++;
    }
    for(int i=1;i<=n;i=i+1)
    {
    if(d[i]==corno[i])
    {
        cout<<"Yes\n";
    }
    else
        cout<<"No\n";

    }
return 0;
}
