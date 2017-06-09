#include<bits/stdc++.h>
#define ll long long
ll total;
using namespace std;
ll int factorial(ll int N)
{
    ll temp,i,temp2;
    if(temp2<N)
    {
     temp2=(N-factorial(N-1));
     temp+=temp2;
        i++;
       total=temp;
    }
    return i;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll int N_choc=0;
        scanf("%lld",&N_choc);
        printf("%lld\n",factorial(N_choc));
        printf("%lld\n",(N_choc-total));
    }
    return 0;
}
