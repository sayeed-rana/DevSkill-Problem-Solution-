#include<iostream>
#include<cmath>
using namespace std;
int recur(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
        {
            if(n2>n3)
                return n2*2+n3;
            else
                return n3*2+n2;
        }
    else if(n2>n1 && n2>n3)
        {
            if(n1>n3)
                return n1*2+n3;
            else
                return n3*2+n1;
        }
    else if(n3>n1 && n3>n2)
        {
            if(n1>n2)
                return n1*2+n2;
            else
                return n2*2+n1;
        }
    else
        return(n1+n2+n3);
}
int main()
{
    int m1,m2,m3;
    while( cin>>m1>>m2>>m3)
    {
    long long int total=recur(m1,m2,m3);
    cout<<total<<"\n";
    }
    return 0;
}
