#include<bits/stdc++.h>
     #include <sstream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
      string numbers_str;
    getline(cin, numbers_str, '\n' );
    float number,numA[50];
    int k=0,r=0;

    for (istringstream numbers_iss( numbers_str );
          numbers_iss >> number; ) {
        numA[k]=number;
        k++;
        r=k;
    }
    for(int i=0;i<r;i++)
    {
        cout<<numA[i]<<" ";
    }
    }
    return 0;
}
