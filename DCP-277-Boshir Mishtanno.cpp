#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int tc;
     cin>>tc;
     for(int i=1;i<=tc;i++)
     {
         long long int r=0,c=0,sum=0,total=0,sum2=0;
         cin>>r>>c;
         printf("Case %d: ",i);
         if(c==1)
         {
             total=r*15;
         }
         else if(r==1)
         {
             total=c*15;
         }
         else
         {

             if(r>c)
             {
             do
             {
                sum+=(r*c);
                r--;
                c--;
             }while(c!=0);
             }
             else
             {
              do
             {
                sum+=(r*c);
                r--;
                c--;
             }while(r!=0);
             }

             total=sum*15;
         }
         cout<<total<<"\n";
     }
     return 0;
 }
