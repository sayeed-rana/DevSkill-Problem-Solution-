#include<iostream>
using namespace std;
int main()
{
    int v1,v2,d,t,tc,s1,s2,i;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
      cin>>v1>>v2>>d>>t;
       s1=v1*t;
       s2=v2*t+d;

       if(s2<s1 || (d==0 && t>0))
       {
           cout<<"Case "<<i<<": Abir will be arrested\n";

       }
       else
          cout<<"Case "<<i<<": Abir will survive\n";
    }
    return 0;
}
