// A quickly written program for reversing a string
// using reverse()
#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
//void revesreString()
using namespace std;
int main()
{

   int tc;
   cin>>tc;
   cin.ignore();
   while(tc--)
   {
    string str;
    getline(cin,str,'\n');
    reverse(str.begin(),str.end());//this function used for string reverse;
    cout << str<<"\n";
     //cout<<"\n";
   }

   return 0;
}
