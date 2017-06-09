#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int tc,numOfCy,i,j;
    cin>>tc;
    for(int k=1;k<=tc;k++)
    {
        unsigned long long int small=0;
        int chek=0;
        cin>>numOfCy;
        unsigned long long int a[numOfCy],b[numOfCy];
        for(i=0;i<numOfCy;i++)
        {
          cin>>a[i]>>b[i];
        }
        small=b[0];
        for(i=0;i<numOfCy;i++)
        {
            if(b[i]<=small)
            {
                small=b[i];
                chek=i;
            }
        }
        cout<<"Case "<<k<<": ";
        cout<<a[chek]<<" "<<b[chek]<<"\n";
    }
   return 0;
}
