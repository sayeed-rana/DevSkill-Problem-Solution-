/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
using namespace std;
long long int factorial(int a)
{
    long long temp;
    if(a<=1)
        return 1;
    else
        {temp=a*factorial(a-1);
        return temp;}
}
int main()
{
    int tc;
    cin>>tc;
    for(int k=0;k<tc;k++)
    {
        string str;
        cin>>str;
        int length=str.length();
        int countt[length];
        long long int Efact=1,total=0,fact=0;
        for(int i=0;i<length;i++)
        {
             countt[i]=str[i]-'a';
        }
        for(int i=0;i<26;i++)
        {
            int chek=0;
            for(int j=0;j<length;j++)
            {
                if(i==countt[j])
                {
                  chek++;
                }
            }
            if(chek>0)
            {
              fact=factorial(chek);
                Efact*=fact;
            }

        }
        total=factorial(length)/Efact;
        cout<<total<<"\n";

    }
    return 0;
}
