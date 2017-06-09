#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        double v=0,t,a,u;
        cin>>u>>t;
        a=(v-u)/t;
        printf("%.2f\n",a);
    }
    return 0;
}
