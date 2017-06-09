#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tc,product,q,customer;
    float p;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        float sum=0;
        long long total=0,advanced;
        cin>>product;
        for(int j=0;j<product;j++)
        {
            p=0;
            q=0;
            cin>>p>>q;
            sum+=(p*q);
        }
        cin>>total;
        advanced=floor(total-sum);
        cout<<"Case "<<i<<": "<<advanced<<"\n";
    }
    return 0;
}
