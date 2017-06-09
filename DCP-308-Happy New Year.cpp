#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str1,str2,str3;
        int num,chek=0;
        cin>>str1>>str2>>str3;
        cin>>num;
        for(int i=0;i<4;i++)
        {
            if(str2[i]=='a')
            {
                chek++;
            }
        }
        if(chek>=1)
        {
            cout<<"Shuvo nobo borsho "<<num-650<<"\n";
        }
        else if(chek==0)
            cout<<"Shuva naya barsha "<<num+650<<"\n";
    }
    return 0;
}
