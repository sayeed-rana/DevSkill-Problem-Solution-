#include<iostream>
using namespace std;
int main()
{
    int tc,m=1;
    long long int i,num,j;
    cin>>tc;
   for(int f=0;f<tc;f++)
    {

        cin>>num;
        cout<<"Case #"<<m<<":";
        if(num%2==0)
        {
            i=num*3;
            for(j=i;j>=i-2;j--)
            {
                cout<<" "<<j;
            }
        }
        else
        {
            i=num*3;
            for(j=i-2;j<=i;j++)
            {
                cout<<" "<<j;
            }
        }
        cout<<"\n";
        m++;

    }
    return 0;
}
