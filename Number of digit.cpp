#include<iostream>
using namespace std;
int main()
{
    int tc,num,i,j,k;
    float r;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        cin>>num;
        j=0;
        do
        {
            r=num/10;
             num=r;
             j++;
        }while(r>=1);
        cout<<j<<"\n";

    }
}
