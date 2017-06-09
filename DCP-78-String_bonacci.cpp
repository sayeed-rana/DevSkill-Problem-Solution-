#include<iostream>
#include<cstring>
#include<cstdio>
char s[1000]='0',p[1000]='0';
using namespace std;
s[0]='a';
s[1]='b';
p[0]='a';
p[1]='b';
void fibo(int n)
{
   if(n==2)
   {
       for(int j=2;j<=n;j++)
       {
         p[i]=s[j-1]+s[j-2];
       }

   }
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {

        int n,Ith;
        cin>>n>>Ith;
        fibo(n);
    }
}
