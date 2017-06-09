/*
S.M. Sayeed
CSE'12 JUST
*/
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int g=0;g<tc;g++)
    {
        string str1;
        cin>>str1;
        //str1=strlwr(str3);
        int length=str1.length();
        int str2[length],chek=0,countt[length];

        for(int i=0;i<length;i++)
        {
            int m=str1[i]-'a';
            cout<<m;
            if(m<0)
            {

              countt[i]=(97+(str1[i]-'A'));
            }
            else
                countt[i]=m+97;

        }
        int k=0;
        for(int j=length-1;j>=0;j--)
        {
            str2[k]=countt[j];
            k++;
        }
        for(int m=0;m<length;m++)
        {
            if(str2[m]==countt[m])
            {
              chek++;
            }
        }
        if(chek==length)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
