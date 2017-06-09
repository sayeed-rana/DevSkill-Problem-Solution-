#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int i,n;
    double ab,bc,cd,ca;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ab>>bc>>cd;
        ca=sqrt((ab*ab)+(bc*bc));
        printf("%.2f\n",sqrt((ca*ca)+(cd*cd)));
    }
    return 0;
}
