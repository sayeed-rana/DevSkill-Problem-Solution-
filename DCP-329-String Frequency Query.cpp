#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[100001];
    cin>>s;
    int length=strlen(s);
    int arr[100001]={0},arr2[100001]={0},j=0;
    for(int i=0;i<length;i++)
    {
        arr[s[i]-'a']++;
    }
    int mm=0;
    cin>>mm;
    for(int i=0;i<mm;i++)
    {
        char s2;
        int pp=0,ss=0;
        cin>>pp;
        if(pp==2)
        {
            cin>>s2;
            cout<<arr[s2-'a']<<"\n";
        }
        else
        {
            cin>>ss>>s2;
            if(s[ss]!=(s2-'a'))
              {
                arr[s2-'a']++;
                arr[s[ss]-'a']--;
                s[ss]=s2;
              }

        }


    }

    return 0;
}
