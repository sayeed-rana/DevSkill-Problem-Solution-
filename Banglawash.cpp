#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a=2*t;
    int b1[a],b2[a],p1[a],p2[a],sumb[a],sump[a];
    int n=1;
    while(n<=a)
    {
        cin>>b1[n];
        cin>>b2[n];
        cin>>p1[n];
        cin>>p2[n];
        n++;
    }
    for(int i=1;i<=a;i++)
    {
        sumb[i]=b1[i]+b2[i];
        sump[i]=p1[i]+p2[i];
    }
    for(int i=1;i<=a;i=i+2)
    {
      if(sumb[i]>sump[i])
      {
          for(int j=i+1;j<=i+1;j=j+2)
          {
              if(sumb[j]>sump[j])
                cout<<"Banglawash\n";
              else
                cout<<"Miss\n";
          }

      }
      else
        cout<<"Miss\n";

    }
    return 0;
}
