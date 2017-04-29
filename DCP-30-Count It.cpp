/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int k=1;k<=tc;k++)
    {
        string str;

        cin>>str;
        int length=str.length();
        int countt[length];
        cout<<"Case "<<k<<":\n";
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
                cout<<char(i+97)<<" "<<chek<<"\n";
        }

    }
    return 0;
}

