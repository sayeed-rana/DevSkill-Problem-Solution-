#include<iostream>
using namespace std;
int main()
{
    int tc,i=0,j,num,t;

    cin>>tc;
    while(tc--)
    {
        long long m_add=0,my_add=0;
        cin>>j;
        for(i=0;i<j;i++)
        {
            cin>>num;
            my_add+=num;
            t=num-i;
            if(t>=0)
            {
              m_add+=t;
            }

        }
        cout<<my_add-m_add<<"\n";
    }

    return 0;
}
