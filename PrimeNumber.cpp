#include<iostream>
using namespace std;
int main()
{
    int tc,num,i,chek=0;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        cin>>num;
        for(int j=1;j<=num;j++)
        {
            if(num%j==0)
            {
              chek++;
            }
        }
        if(chek==2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
       chek=0;
    }
    return 0;
}
