#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
       int numA,chek=0;
       scanf("%d",&numA);
       signed int numB[numA];
       for(int j=0;j<numA;j++)
       {
           scanf("%d",&numB[j]);
       }
       for(int k=0;k<numA;k++)
       {
           for(int m=0;m<numA;m++)
           {
             if(numB[k]==numB[m])
             {
                 chek++;
             }
           }
       }
       if(numA==1)
       {
         //cout<<"Case "<<i+1<<": "<<"0\n";
         printf("Case %d: 0\n",i+1);
       }
       else if(chek==numA)
       {
         printf("Case %d: 1\n",i+1);
       }
       else
       printf("Case %d: 0\n",i+1);


    }

   return 0;
}
