#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //int t=1;
    int n;
    cin>>n;
    double d,corno;
    double s,r;
    for(int i=1;i<=n;i=i+1)
    {
    cin>>r;
    cin>>s;
    d=(2*r);
    corno=sqrt(s*s+s*s);
    double temp=abs(d-corno);
    if(temp<=0.001)   //This is a check for after dot two number are same? Example 4.2626 and 4.2623//
    {

        cout<<"Yes\n";

    }
    else if(temp>=0.001 && temp<=0.009)
    {
       cout<<"Yes\n";

    }
    else
        cout<<"No\n";
    }


return 0;
}

