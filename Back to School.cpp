/*
S.M. Sayeed
CSE'12 JUST
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int cx,cy,px,py;
    int n;
    float r,D;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>cx>>cy>>r>>px>>py;
        D=pow((px-cx),2)+pow((py-cy),2);
        //D=abs(sq-r);
        if(D==r*r)
        {
           cout<<"Case " <<i<<": OnCircle\n";
        }

        else if(D>r*r)
        {
            cout<<"Case " <<i<<": Outside\n";
        }
        else if(D<r*r)
            cout<<"Case " <<i<<": Inside\n";
    }
    return 0;
}
