#include<bits/stdc++.h>
using namespace std;
//#define long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int N,i=2,j=1;
        long long int total=0;
        cin>>N;
        if(N==1)
        {
           cout<<total<<"\n";
        }
        else
        {
          do
        {
          total+=i;
          i=i+4;
          j++;
        }while(j<N);
        cout<<total<<"\n";
        }

    }
    return 0;
}
